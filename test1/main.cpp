#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QApplication>
#include <QMessageBox>

#include "events.cpp"

// Main function
int main(int argc, char *argv[])
{
    // Initialize the Qt Application (Current Project)
    QApplication a(argc, argv);
    // Create an instance of MainWindow and show() it
    MainWindow w;
    w.show();
    // Our load function
    Load(w.ui);
    // Run the application
    return a.exec();
}
