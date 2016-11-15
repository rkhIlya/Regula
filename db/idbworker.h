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
    virtual void requestDeisgnations() = 0;
    virtual QVariantMap getRegulationInfo(QString id) = 0;
signals:
    void disignationReceived(QList<QPair<QString, QString> > designations) = 0;


};

#endif // IDBWORKER_H
