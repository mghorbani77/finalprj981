#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <stdlib.h> // for srand() and rand()

#include <QApplication>
#include <QMessageBox>

#include "events.cpp"

// Main function
int main(int argc, char *argv[])
{
    // Allow make a random seed
    srand(time(NULL));
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
