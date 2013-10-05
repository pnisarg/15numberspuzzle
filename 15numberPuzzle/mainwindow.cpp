        /**
  * @author: Nisarg Patel
  * @title: 15 Number Puzzle
  * @date: 27/07/2013
  */

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "game.h"
#include <QSound>
#include<QtGui>
#include <QString>

game *gameObj;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    gameObj = new game();
    ui->setupUi(this);
    setStyleSheet("QPushButton {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #D3D3D3, stop: 0.4 #D8D8D8,stop: 0.5 #DDDDCC, stop: 1.0 #E1E1E1); border-style: outset; border-width: 2px; border-radius: 10px; border-color: beige;}");
}

MainWindow::~MainWindow()
{
    delete ui;
    delete gameObj;
}



//shuffle logic
void MainWindow::on_pushButton_clicked()
{

    gameObj->shuffle(ui);
}



void MainWindow::on_button_1_clicked()
{

    gameObj->logic(gameObj->board[0][0],ui);

}

void MainWindow::on_button_2_clicked()
{

    gameObj->logic(gameObj->board[0][1],ui);
}

void MainWindow::on_button_3_clicked()
{

    gameObj->logic(gameObj->board[0][2],ui);
}


void MainWindow::on_button_4_clicked()
{

     gameObj->logic(gameObj->board[0][3],ui);
}


void MainWindow::on_button_5_clicked()
{

    gameObj->logic(gameObj->board[1][0],ui);
}
void MainWindow::on_button_6_clicked()
{

    gameObj->logic(gameObj->board[1][1],ui);
}
void MainWindow::on_button_7_clicked()
{

    gameObj->logic(gameObj->board[1][2],ui);
}
void MainWindow::on_button_8_clicked()
{

    gameObj->logic(gameObj->board[1][3],ui);
}

void MainWindow::on_button_9_clicked()
{

    gameObj->logic(gameObj->board[2][0],ui);
}
void MainWindow::on_button_10_clicked()
{

    gameObj->logic(gameObj->board[2][1],ui);
}
void MainWindow::on_button_11_clicked()
{

    gameObj->logic(gameObj->board[2][2],ui);
}
void MainWindow::on_button_12_clicked()
{

    gameObj->logic(gameObj->board[2][3],ui);
}


void MainWindow::on_button_13_clicked()
{

    gameObj->logic(gameObj->board[3][0],ui);
}
void MainWindow::on_button_14_clicked()
{

    gameObj->logic(gameObj->board[3][1],ui);
}
void MainWindow::on_button_15_clicked()
{

    gameObj->logic(gameObj->board[3][2],ui);
}
void MainWindow::on_button_16_clicked()
{

    gameObj->logic(gameObj->board[3][3],ui);
}

void MainWindow::on_pushButton_2_clicked()
{
    this->close();
}
