#include "readdocx.h"

ReadDocx::ReadDocx(QWidget *parent)
  : QWidget(parent)
{
  textEdit = new QTextEdit();
  layout = new QVBoxLayout();
  layout->addWidget(textEdit);

  axObject = new QAxObject("Word.Application", this);
  documents = axObject->querySubObject("Documents");
  document = documents->querySubObject("Open(const QString&, bool)", "C:\\test.docx", true);
  content = document->querySubObject("Content");

  QString textResult = content->dynamicCall("Text").toString();
  document->dynamicCall("Close()");
  documents->dynamicCall("Quit()");

  textEdit->setText(textResult);
  setLayout(layout);
}

ReadDocx::~ReadDocx()
{
}
