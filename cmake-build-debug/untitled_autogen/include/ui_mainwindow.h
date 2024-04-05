/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *krok;
    QLabel *liczba_krokow;
    QTextBrowser *textBrowser;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *glony;
    QLabel *grzyby;
    QLabel *bakterie;
    QLabel *martwe;
    QVBoxLayout *verticalLayout_2;
    QLabel *liczba_glonow;
    QLabel *liczba_grzyby;
    QLabel *liczba_bakterij;
    QLabel *liczba_martwyh;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(250, 350);
        MainWindow->setMinimumSize(QSize(250, 350));
        MainWindow->setMaximumSize(QSize(250, 350));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 0, 131, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        krok = new QLabel(widget);
        krok->setObjectName(QString::fromUtf8("krok"));

        horizontalLayout->addWidget(krok);

        liczba_krokow = new QLabel(widget);
        liczba_krokow->setObjectName(QString::fromUtf8("liczba_krokow"));

        horizontalLayout->addWidget(liczba_krokow);

        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 40, 231, 192));
        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 250, 111, 91));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        glony = new QLabel(widget1);
        glony->setObjectName(QString::fromUtf8("glony"));

        verticalLayout->addWidget(glony);

        grzyby = new QLabel(widget1);
        grzyby->setObjectName(QString::fromUtf8("grzyby"));

        verticalLayout->addWidget(grzyby);

        bakterie = new QLabel(widget1);
        bakterie->setObjectName(QString::fromUtf8("bakterie"));

        verticalLayout->addWidget(bakterie);

        martwe = new QLabel(widget1);
        martwe->setObjectName(QString::fromUtf8("martwe"));

        verticalLayout->addWidget(martwe);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        liczba_glonow = new QLabel(widget1);
        liczba_glonow->setObjectName(QString::fromUtf8("liczba_glonow"));

        verticalLayout_2->addWidget(liczba_glonow);

        liczba_grzyby = new QLabel(widget1);
        liczba_grzyby->setObjectName(QString::fromUtf8("liczba_grzyby"));

        verticalLayout_2->addWidget(liczba_grzyby);

        liczba_bakterij = new QLabel(widget1);
        liczba_bakterij->setObjectName(QString::fromUtf8("liczba_bakterij"));

        verticalLayout_2->addWidget(liczba_bakterij);

        liczba_martwyh = new QLabel(widget1);
        liczba_martwyh->setObjectName(QString::fromUtf8("liczba_martwyh"));

        verticalLayout_2->addWidget(liczba_martwyh);


        horizontalLayout_2->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Virtual ecosystem", nullptr));
        krok->setText(QCoreApplication::translate("MainWindow", "Krok symulacji: ", nullptr));
        liczba_krokow->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        glony->setText(QCoreApplication::translate("MainWindow", "Glony * :", nullptr));
        grzyby->setText(QCoreApplication::translate("MainWindow", "Grzyby # :", nullptr));
        bakterie->setText(QCoreApplication::translate("MainWindow", "Bakterie @ :", nullptr));
        martwe->setText(QCoreApplication::translate("MainWindow", "Martwe + :", nullptr));
        liczba_glonow->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        liczba_grzyby->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        liczba_bakterij->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        liczba_martwyh->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
