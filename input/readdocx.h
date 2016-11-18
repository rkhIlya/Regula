#ifndef READDOCX_H
#define READDOCX_H

#include <QWidget>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QAxBase>
#include <QAxObject>

class ReadDocx : public QWidget
{
  Q_OBJECT
  QTextEdit *textEdit;
  QVBoxLayout *layout;
  QAxObject *axObject;
  QAxObject *documents;
  QAxObject *document;
  QAxObject *content;
public:
  ReadDocx(QWidget *parent = 0);
  ~ReadDocx();
};

#endif // READDOCX_H
