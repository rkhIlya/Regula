#include "saphiredbops.h"

SaphireDbOps::SaphireDbOps(QObject *parent) : QObject(parent)
{
    qRegisterMetaType<QHash<QString, QString> >();
}

void SaphireDbOps::updateDesignations()
{
    QHash<QString, QString> designations;
    QSqlQuery query;
    query.prepare("SELECT OBOZ, DOC_ID FROM dbo.e015v_NormDocs"); //tablename
    if (!query.exec())
        //todo error handler
        return;

    while (query.next()) {
        QString designation = query.value(0).toString();
        QString docId = query.value(1).toString();
        designations.insert(designation, docId);
    }

    emit disignationsReceived(designations);
}

QVariantMap SaphireDbOps::getRegulationInfo(QString id)
{
    QVariantMap info;
    QSqlQuery query;
    query.prepare(QString("SELECT * FROM dbo.e015v_NormDocs WHERE DOC_ID = '%1' ")
                  .arg(id));

    if (!query.exec()) {
        return info;
    }

    if (!query.next())
        return info;

    int fieldCount = query.record().count();
    for (int i = 0; i < fieldCount; ++i) {
        info.insert(query.record().fieldName(i), query.value(i));
    }


    return info;
}

void SaphireDbOps::connectToDb()
{
    QSettings settings(QCoreApplication::applicationDirPath() + "/config.ini", QSettings::IniFormat);
    settings.beginGroup("DATABASE");

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName(settings.value("dbname",   "DRIVER={SQL Server};SERVER=DBSRVTEST;DATABASE=DOCS;Trusted_Connection=no;").toString());
    db.setUserName    (settings.value("username", "ProgramCon1").toString());
    db.setPassword    (settings.value("password", "Pr0gr@mCon1").toString());

    bool ok = db.open();
    if (!ok) {
        qDebug() << db.lastError().text();
    }

}


