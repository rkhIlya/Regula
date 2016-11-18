#ifndef ISEARCHENGINE_H
#define ISEARCHENGINE_H

#include "reference.h"

#include <QObject>
#include <QList>

class Rule;

class ISearchEngine : public QObject
{     
    Q_OBJECT
public:
    enum Status {

    };


    ISearchEngine(){}
    virtual void startSearch(QString text, QList<Rule>) = 0;

signals:
    void searchComplete(QList<Search::Reference> refList, Status status);
    void statusChanged(Status status, double complete);
};

#endif // ISEARCHENGINE_H
