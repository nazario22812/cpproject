#include "mainwindow.h"
#include <QKeyEvent>

#include <QApplication>

int main(int argc, char *argv[])
{
    srand(time(nullptr));
    QApplication a(argc, argv);
    MainWindow mainWindow;

    mainWindow.show();
    //mainWindow.start();

//    QKeyEvent keyEvent(QEvent::KeyPress, Qt::Key_Space, Qt::NoModifier);





    return a.exec();
}
