#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "math.h"

#include <QApplication>
#include <QMessageBox>

#include <data.cpp>
#include <graphicc.cpp>

// Init.
static xData data;

// Reset window
void Reset(Ui::MainWindow *ui){
    for (char i = 0 ; i < 16 ; i ++)
        SetBackgroundImage(data.Get(i)->GetImage(), // file name
                           GetButtonById(i, ui), // button
                           *data.Get(i)->GetAngle() // rotation
                           );
}

// Window load
void Load(Ui::MainWindow *ui) {
    // To allow reset the board on 'New Game'
    data = new xData;

    // Set Background image for source and destination buttons
    SetBackgroundImage("icons\\source.png", ui->btn_source, 0);
    SetBackgroundImage("icons\\dest.png", ui->btn_dest, 0);

    // Reset the window
    Reset(ui);
}

// Click events and slots
void Clicked(int btn_no, Ui::MainWindow *ui) {

    // Rotate on click
    data.Get(btn_no)->Rotate();

    // Reset the window
    Reset(ui);

    // TODO: Calculate the result
    int score = 0;

    // Calculate score
    if (data.IsWinnerBoard(score))
    {
        QMessageBox msgBox;
        char msg[50];
        sprintf(msg,"Hooray! %d", score);
        msgBox.setText(msg);
        msgBox.exec();
    }



}


// Board buttons

void MainWindow::on_btn_0_clicked()
{
    Clicked(0, ui);
}
void MainWindow::on_btn_1_clicked()
{
    Clicked(1, ui);
}
void MainWindow::on_btn_2_clicked()
{
    Clicked(2, ui);
}
void MainWindow::on_btn_3_clicked()
{
    Clicked(3, ui);
}
void MainWindow::on_btn_4_clicked()
{
    Clicked(4, ui);
}
void MainWindow::on_btn_5_clicked()
{
    Clicked(5, ui);
}
void MainWindow::on_btn_6_clicked()
{
    Clicked(6, ui);
}
void MainWindow::on_btn_7_clicked()
{
    Clicked(7, ui);
}
void MainWindow::on_btn_8_clicked()
{
    Clicked(8, ui);
}
void MainWindow::on_btn_9_clicked()
{
    Clicked(9, ui);
}
void MainWindow::on_btn_10_clicked()
{
    Clicked(10, ui);
}
void MainWindow::on_btn_11_clicked()
{
    Clicked(11, ui);
}
void MainWindow::on_btn_12_clicked()
{
    Clicked(12, ui);
}
void MainWindow::on_btn_13_clicked()
{
    Clicked(13, ui);
}
void MainWindow::on_btn_14_clicked()
{
    Clicked(14, ui);
}
void MainWindow::on_btn_15_clicked()
{
    Clicked(15, ui);
}

// Menu items: New Game
void MainWindow::on_actionNew_Game_triggered()
{
    Load(ui);
}
