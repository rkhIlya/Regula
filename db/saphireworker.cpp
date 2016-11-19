#include "saphireworker.h"
#include <QDebug>

SaphireWorker::SaphireWorker()
{
    _dbOpsThread = new QThread;
    _dbOps = new SaphireDbOps;
    _dbOps->moveToThread(_dbOpsThread);
    _dbOpsThread->start();

    QMetaObject::invokeMethod(_dbOps, "connectToDb", Qt::BlockingQueuedConnection);


    connect(_dbOps, &SaphireDbOps::disignationsReceived, this, &SaphireWorker::onDesignationsReceived);

    requestDesignations();
}

SaphireWorker::~SaphireWorker()
{
   _dbOpsThread->quit();
   _dbOpsThread->wait();

   _dbOps->deleteLater();
}

void SaphireWorker::requestDesignations()
{
    QMetaObject::invokeMethod(_dbOps, "updateDesignations", Qt::QueuedConnection);
}

QVariantMap SaphireWorker::getRegulationInfo(QString id)
{
    QVariantMap regInfo;
    QMetaObject::invokeMethod(_dbOps, "getRegulationInfo", Qt::BlockingQueuedConnection ,
                              Q_RETURN_ARG(QVariantMap, regInfo),
                              Q_ARG(QString, id));

    return regInfo;
}

const QHash<QString, QString>& SaphireWorker::getDesignations(bool &ok)
{
    ok = _updated;
    return _designations;
}

void SaphireWorker::onDesignationsReceived(const QHash<QString, QString> &designations)
{
    _updated = true;
    _designations = designations;

    emit designationsUpdated();
}




