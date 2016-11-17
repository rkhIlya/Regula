#ifndef ITEXTEXTRACTOR_H
#define ITEXTEXTRACTOR_H

#include <QObject>

class ITextExtractor : public QObject
{
    Q_OBJECT
public:
    ITextExtractor() {}

    virtual void requestText(QString fileName) = 0;

signals:
    void textReceived(QString text);
};

#endif // ITEXTEXTRACTOR_H
