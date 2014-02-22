/**
  * @author: Nisarg Patel
  * @title: 15 Number Puzzle
  * @date: 27/07/2013
  */

#include "game.h"
#include <ctime>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>
#include<QtCore>
#include<iostream>

#include <QString>
game::game()
{
    count = 0;
    buttonZero = 16;
}
game::game(Ui::MainWindow *ui)
{
    std::cout << "game cons";
    count = 0;
    buttonZero = 16;
    shuffle(ui);
}
void game :: display(Ui::MainWindow *ui){
   ui->button_1->setText(QString :: number(board[0][0]));
   ui->button_2->setText(QString :: number(board[0][1]));
   ui->button_3->setText(QString :: number(board[0][2]));
   ui->button_4->setText(QString:: number(board[0][3]));
   ui->button_5->setText(QString:: number(board[1][0]));
   ui->button_6->setText(QString:: number(board[1][1]));
   ui->button_7->setText(QString:: number(board[1][2]));
   ui->button_8->setText(QString:: number(board[1][3]));
   ui->button_9->setText(QString:: number(board[2][0]));
   ui->button_10->setText(QString:: number(board[2][1]));
   ui->button_11->setText(QString:: number(board[2][2]));
   ui->button_12->setText(QString:: number(board[2][3]));
   ui->button_13->setText(QString:: number(board[3][0]));
   ui->button_14->setText(QString:: number(board[3][1]));
   ui->button_15->setText(QString:: number(board[3][2]));
   ui->button_16->setText(QString:: number(board[3][3]));
   switch(buttonZero){
   case 1: ui->button_1->hide();
           break;
   case 2:ui->button_2->hide();
           break;
   case 3: ui->button_3->hide();
           break;
   case 4:ui->button_4->hide();
           break;
   case 5: ui->button_5->hide();
           break;
   case 6:ui->button_6->hide();
           break;
   case 7: ui->button_7->hide();
           break;
   case 8:ui->button_8->hide();
           break;
   case 9: ui->button_9->hide();
           break;
   case 10:ui->button_10->hide();
           break;
   case 11: ui->button_11->hide();
           break;
   case 12:ui->button_12->hide();
           break;
   case 13: ui->button_13->hide();
           break;
   case 14:ui->button_14->hide();
           break;
   case 15: ui->button_15->hide();
           break;
   case 16:ui->button_16->hide();
           break;
   }

}

void game :: reset(){
    count = 0;
    buttonZero = 16;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            board[i][j] = (i*4)+(j+1);
            numRow[((i*4)+(j+1))] =0;
            numCol[((i*4)+(j+1))] =0;
        }
    }

}
void game :: showAll(Ui::MainWindow *ui){
ui->button_1->show();
ui->button_2->show();
ui->button_3->show();
ui->button_4->show();
ui->button_5->show();
ui->button_6->show();
ui->button_7->show();
ui->button_8->show();
ui->button_9->show();
ui->button_10->show();
ui->button_11->show();
ui->button_12->show();
ui->button_13->show();
ui->button_14->show();
ui->button_15->show();
ui->button_16->show();

}

void game :: shuffle(Ui::MainWindow *ui){
    reset();
    showAll(ui);
    srand(time(0));
    int row = 3,col=3,temp;
    int moveR[] = {0,-1,1,0};
    int moveC[] = {-1,0,0,1};
    int newRow, newCol;

    for(int i=0;i<300;i++){
        temp = rand() % 4;
        newRow = row +moveR[temp];
        newCol = col + moveC[temp];
        if(newRow < 0 || newCol < 0 || newRow >=4 || newCol >=4)
            continue;

        //swap
        temp = board[newRow][newCol];
        board[newRow][newCol] = 0;
        board[row][col] = temp;
        numRow[temp] = row;
        numCol[temp] = col;
        row = newRow; col = newCol;
    }
    //find the button with value 0
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if(board[i][j]==0){
                buttonZero = (i*4) + (j+1);
                break;
            }
        }
    }
     display(ui);
}


bool game :: validate(int row,int col){
    int newRow, newCol;

    int x[] = {1,-1,0,0};
    int y[] = {0,0,1,-1};
    for(int i=0;i<4;i++){
        newRow = row + x[i];
        newCol = col + y[i];
        if(newRow < 0 || newCol < 0 || newRow >=4 || newCol >=4 || board[newRow][newCol]!=0)
            continue;
        newR = newRow;
        newC = newCol;
        return true;
    }
return false;
}

void game :: logic(int num,Ui::MainWindow *ui){
    int row,col;
//    display();
    row = numRow[num];
    col = numCol[num];
    bool move = validate(row,col);
    if(!move){

    }else{
        board[newR][newC] = num;
        numRow[num] = newR;
        numCol[num] = newC;
        board[row][col] = 0;
        buttonZero = (row*4)+(col+1);
        count++;
        ui->label_2->setText( QString :: number(count));

        switch((newR*4)+(newC+1)){
        case 1: ui->button_1->show();
                break;
        case 2:ui->button_2->show();
                break;
        case 3: ui->button_3->show();
                break;
        case 4:ui->button_4->show();
                break;
        case 5: ui->button_5->show();
                break;
        case 6:ui->button_6->show();
                break;
        case 7: ui->button_7->show();
                break;
        case 8:ui->button_8->show();
                break;
        case 9: ui->button_9->show();
                break;
        case 10:ui->button_10->show();
                break;
        case 11: ui->button_11->show();
                break;
        case 12:ui->button_12->show();
                break;
        case 13: ui->button_13->show();
                break;
        case 14:ui->button_14->show();
                break;
        case 15: ui->button_15->show();
                break;
        case 16:ui->button_16->show();
                break;
        }

        display(ui);
    }
    if(isGameOver()){
        //logic to write
        QMessageBox msgBox;
        QString string = "You win!!\t\t \n No. of setps: "+ QString :: number(count) + "\t\t \n\n\n click OK to play new Game. Cancel to EXIT";

        msgBox.setIcon(QMessageBox :: Information);
        msgBox.setInformativeText(string);
        msgBox.setStandardButtons(QMessageBox :: Ok | QMessageBox :: Cancel);
        int ret = msgBox.exec();

                //User get input from returned value (ret). you can handle it here.
             switch (ret) {
               case QMessageBox::Cancel:
                 exit(0);
                   break;
               case QMessageBox::Ok:
                    shuffle(ui);
                   break;
               default:
                   // should never be reached
                   break;
             }

    }
}

bool game :: isGameOver(){
    int k = 1;
    for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if(board[i][j] == k || (i==3 && j==3))
                    k++;
                else{
                    return false;
                }
            }
    }
    return true;
}
