#include <iostream>
#include <QKeyEvent>
#include <QDebug>
#include <QTextBlock>
#include "mainwindow.h"
#include <time.h>
#include <cstdlib>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    //connect(this, &MainWindow::keyPressEvent, this, &MainWindow::keyPress);
    ui->setupUi(this);

    ui->textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
//    ui->bakterie->setText("Bakterie & :");

    //srand(time(nullptr));
    kroks = new Kroky();

    for (int i = 0; i < rows; ++i) {
        table[i] = new QString[cols];
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            table[i][j] = "▁"; // Пример заполнения данными
        }
    }


    QString text = ui->textBrowser->toPlainText(); // Получаем текущий текст из QTextBrowser
    for (int i = 0; i < rows; ++i) {
        if(i == 9){
            for (int j = 0; j < cols; ++j) {
                if(j==11){
                    text+= table[i][j];
                }else{
                    text+= table[i][j] + "  ";
                }

            }
        }
        else{
            for (int j = 0; j < cols; ++j) {
                if(j==11){
                    text+= table[i][j];
                }else{
                    text+= table[i][j] + "  ";
                }
            }
            text += "\n";
        }

    }

    ui->textBrowser->setPlainText(text);
    int kroky = kroks->getKrok();
    ui->liczba_krokow->setText(QString::number(kroky));
    //Glony glony;
    //int liczbaglonow = glony.getIlosc();
    //converte from number to string
    //ui->liczba_glonow->setText(QString::number(liczbaglonow+1));

}
//
//bool MainWindow::check() {
//    if(kroks->getKrok()<200){
//        return true;
//    }else{
//        return false;
//    }
//}
void MainWindow::change_tabl(int x, int y, QString name) {
    table[y][x] = name;

    QString text = ui->textBrowser->toPlainText(); // Получаем текущий текст из QTextBrowser

    int startPos = ui->textBrowser->document()->findBlockByLineNumber(y).position();
    QTextCursor cursor(ui->textBrowser->document());
    cursor.setPosition(startPos);

    // Начинаем перезапись строки в QTextBrowser с учетом изменений в таблице
    for (int j = 0; j < cols; ++j) {
        // Получаем текущее значение из таблицы
        QString currentValue = table[y][j];

        // Добавляем текущее значение к тексту
        text.replace(cursor.position(), currentValue.length(), currentValue);

        // Перемещаем курсор к следующему слову
        cursor.movePosition(QTextCursor::NextWord);
    }

    // Устанавливаем обновленный текст в QTextBrowser
    ui->textBrowser->setPlainText(text);
}
//void MainWindow::start(QKeyEvent *event) {
//
//
//}

int MainWindow::los_x() {
    int y = 11 - rand() %(11 - 0+1);
    return y;
}

int MainWindow::los_y(){
    int y = 9 - rand() %(9 - 0+1);
    return y;
}



void MainWindow::keyPressEvent(QKeyEvent *event) {
    qDebug() << "Key pressed: "<< event->text();
    //qDebug() << los_y();
    keyPress(event);
}

void MainWindow::keyPress(QKeyEvent *event) {

    if(event->key() == Qt::Key_R){
        kroks->addkrok();
        //int kroks_value = kroks->getKrok();
        ui->liczba_krokow->setText(QString::number(kroks->getKrok()));
        if(kroks->getKrok() <200){
            if(kroks->getKrok() == 1){
                //add glony
                Glony glony1(los_x(),los_y());
                change_tabl(glony1.getX(), glony1.getY(), glony1.getName());

                //add grzyby
                Grzyby grzyby1(los_x(),los_y());
                change_tabl(grzyby1.getX(),grzyby1.getY(),grzyby1.getName());

                //add bakterii
                Bakterii bakterii(los_x(), los_y());
                change_tabl(bakterii.getX(),bakterii.getY(),bakterii.getName());

            }
        }
    }
    if(event->key() == Qt::Key_Q){
        MainWindow::~MainWindow();
    }
}




MainWindow::~MainWindow(){
    delete textBrowser;
    delete[] table;
    delete kroks;

}

