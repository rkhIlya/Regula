#ifndef IDBWORKER_H
#define IDBWORKER_H

#include <QObject>


class IDbWorker : public QObject
{
    Q_OBJECT
public:
    IDbWorker() {}
    /*!
     * \brief requestDeisgnations Запрашивает столбец OBOZ всей таблицы.
     */
    virtual void updateDesignations() = 0;
    virtual QVariantMap getRegulationInfo(QString id) = 0;
signals:
    void disignationsUpdated(const QHash<QString, QString>& designations);


};

#endif // IDBWORKER_H
