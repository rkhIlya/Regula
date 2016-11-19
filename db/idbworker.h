#ifndef IDBWORKER_H
#define IDBWORKER_H

#include <QString>
#include <QVariantMap>


class IDbWorker
{

public:
    virtual ~IDbWorker() {}
    /*!
     * \brief requestDeisgnations Запрашивает столбец OBOZ всей таблицы.
     */
    virtual void requestDesignations() = 0;
    virtual QVariantMap getRegulationInfo(QString id) = 0;

    virtual const QHash<QString, QString>& getDesignations(bool &ok) = 0;

};

#endif // IDBWORKER_H
