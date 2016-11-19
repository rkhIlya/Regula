#ifndef SAPHIREWORKER_H
#define SAPHIREWORKER_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSettings>
#include <QDir>

#include <QHash>

#include "idbworker.h"

class SaphireWorker : public IDbWorker
{
    Q_OBJECT
public:
    SaphireWorker();

    virtual void updateDesignations() override;
    virtual QVariantMap getRegulationInfo(QString id) override;


private:
    QSqlDatabase _db;
    QHash<QString, QString> _designations;


    /*!
     * \brief init Подключается к базе данных
     */
    void init();

    /*!
     * \brief deinit Отключение от базы данных
     */
    void deinit();



};

#endif // SAPHIREWORKER_H
