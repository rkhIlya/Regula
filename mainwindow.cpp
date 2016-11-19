#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_fileDialogButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
          tr("Open Image"), "", tr("Документы (*.doc *.docx);;(*.*)"));

    ui->fileNameLineEdit->setText(fileName);

}

void MainWindow::on_analyzeButton_clicked()
{

}
