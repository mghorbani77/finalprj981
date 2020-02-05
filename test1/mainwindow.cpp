#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Set buttons to flat
    ui->btn_0->setFlat(true);
    ui->btn_1->setFlat(true);
    ui->btn_2->setFlat(true);
    ui->btn_3->setFlat(true);
    ui->btn_4->setFlat(true);
    ui->btn_5->setFlat(true);
    ui->btn_6->setFlat(true);
    ui->btn_7->setFlat(true);
    ui->btn_8->setFlat(true);
    ui->btn_9->setFlat(true);
    ui->btn_10->setFlat(true);
    ui->btn_11->setFlat(true);
    ui->btn_12->setFlat(true);
    ui->btn_13->setFlat(true);
    ui->btn_14->setFlat(true);
    ui->btn_15->setFlat(true);

    ui->btn_source->setFlat(true);
    ui->btn_dest->setFlat(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}
