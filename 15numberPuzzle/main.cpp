/**
  * @author: Nisarg Patel
  * @title: 15 Number Puzzle
  * @date: 27/07/2013
  */

#include <QtGui>
#include <QApplication>
#include "mainwindow.h"
#include <QtCore>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();
    return a.exec();
}
