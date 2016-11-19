#include "mainwindow.h"
#include <QApplication>
#include <QThread>


#include "db/saphireworker.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    /* Компонент работы с базой данных */
    IDbWorker *d = new SaphireWorker();


    return a.exec();
}
