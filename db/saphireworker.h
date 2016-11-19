#ifndef SAPHIREWORKER_H
#define SAPHIREWORKER_H



#include <QHash>
#include <QThread>

#include "idbworker.h"
#include "saphiredbops.h"


class SaphireWorker : public QObject, public IDbWorker
{
    Q_OBJECT
public:
    SaphireWorker();
    ~SaphireWorker();

    virtual void requestDesignations() override;
    virtual QVariantMap getRegulationInfo(QString id) override;

    virtual const QHash<QString, QString>& getDesignations(bool &ok) override;


private:

    QHash<QString, QString> _designations;
    QThread      *_dbOpsThread;
    SaphireDbOps *_dbOps;

    bool _updated;

public slots:
    void onDesignationsReceived(const QHash<QString, QString>& designations);
signals:
    void designationsUpdated();


};

#endif // SAPHIREWORKER_H
