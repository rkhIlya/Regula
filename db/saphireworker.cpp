#include "saphireworker.h"

SaphireWorker::SaphireWorker()
{

}

void SaphireWorker::updateDesignations()
{
    QSqlQuery query(_db);
    query.prepare("SELECT OBOZ, DOC_ID FROM TABLENAME"); //tablename
    if (!query.exec())
        //todo error handler
        return;

    while (query.next()) {
        QString designation = query.value(0).toString();
        QString docId = query.value(1).toString();
        _designations.insert(designation, docId);
    }

    emit disignationsUpdated(_designations);
}

QVariantMap SaphireWorker::getRegulationInfo(QString id)
{
    QVariantMap info;
    QString fields = "OBOZ,DOC_ID,...";
    QSqlQuery query(_db);
    query.prepare(QString("SELECT %1 WHERE DOC_ID = %2 FROM TABLENAME")
                    .arg(fields)
                    .arg(id)); //tablename

    if (!query.exec()) {
        return info;
    }

    foreach (QString field, fields.split(",")) {
        if (!query.next())
            return info;

        info.insert(fields, query.value(field));
    }

    return info;

}

void SaphireWorker::init()
{
    QSettings settings(QDir::currentPath() + "config.ini", QSettings::IniFormat);
    settings.beginGroup("DATABASE");

    QSqlDatabase _db = QSqlDatabase::addDatabase("QODBC", "Saphire");
    _db.setHostName    (settings.value("hostname", "").toString());
    _db.setDatabaseName(settings.value("dbname",   "").toString());
    _db.setUserName    (settings.value("username", "").toString());
    _db.setPassword    (settings.value("password", "").toString());

    bool ok = _db.open();
    if (!ok) {
        //reinit? log?
    }

}

void SaphireWorker::deinit()
{
    _db.close();
}
