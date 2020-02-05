#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "math.h"

#include <QApplication>
#include <QMessageBox>


// Set button background image
void SetBackgroundImage(char * filename, QPushButton * btn, int rotation){
    // Init image
    QPixmap pixmap(filename);

    // Rotate image
    QMatrix matriz ;
    matriz = matriz.translate(pixmap.width()/2,pixmap.height()/2);
    matriz.rotate(rotation);
    pixmap = pixmap.transformed(matriz);

    // Resize image
    pixmap = pixmap.scaled(70,70);

    // Draw image
    QPalette palette;
    palette.setBrush(btn->backgroundRole(), QBrush(pixmap));

    // Assign to button
    btn->setAutoFillBackground(true);
    btn->setPalette(palette);
}

// Get button's pointer from it's id
QPushButton * GetButtonById(char btn_no, Ui_MainWindow * ui)
{
    switch (btn_no) {
    case 0:
        return ui->btn_0;
    case 1:
        return ui->btn_1;
    case 2:
        return ui->btn_2;
    case 3:
        return ui->btn_3;
    case 4:
        return ui->btn_4;
    case 5:
        return ui->btn_5;
    case 6:
        return ui->btn_6;
    case 7:
        return ui->btn_7;
    case 8:
        return ui->btn_8;
    case 9:
        return ui->btn_9;
    case 10:
        return ui->btn_10;
    case 11:
        return ui->btn_11;
    case 12:
        return ui->btn_12;
    case 13:
        return ui->btn_13;
    case 14:
        return ui->btn_14;
    case 15:
        return ui->btn_15;
    }
}
