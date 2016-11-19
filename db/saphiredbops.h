#ifndef SAPHIREDBOPS_H
#define SAPHIREDBOPS_H

#include <QCoreApplication>
#include <QDebug>
#include <QObject>
#include <QSettings>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlError>

class SaphireDbOps : public QObject
{
    Q_OBJECT
public:
    explicit SaphireDbOps(QObject *parent = 0);

private:


signals:
    void disignationsReceived(const QHash<QString, QString>& designations);
public slots:

    void connectToDb();
    void updateDesignations();
    QVariantMap getRegulationInfo(QString id);
};

#endif // SAPHIREDBOPS_H
