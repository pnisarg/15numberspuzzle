#include "mainwindow.h"
#include "ui_mainwindow.h"
#ifndef GAME_H
#define GAME_H
class game{
    //Fields
public:
    int board[4][4];
    int count;
    int numRow[16],numCol[16];
    int newR,newC;
    int buttonZero;

    //Constructors
    game();
    game(Ui::MainWindow *ui);


    //Methods
    //void mousePressEvent(QMouseEvent *event);
    void shuffle(Ui::MainWindow *ui);
    void display(Ui::MainWindow *ui);
    void logic(int,Ui::MainWindow *ui);
    bool validate(int,int);
    bool isGameOver();
    void reset();
    void showAll(Ui::MainWindow *ui);
};


#endif // GAME_H
