/********************************************************************************
** Form generated from reading UI file 'Chatting_Program.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATTING_PROGRAM_H
#define UI_CHATTING_PROGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *IPAddress;
    QLabel *Text;
    QLabel *IP;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *Username;
    QLabel *Text2;
    QLineEdit *UserInput;
    QPushButton *Button;
    QPlainTextEdit *Chatting;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QLabel *Filelabel;
    QLabel *FileCourse;
    QPushButton *FileSelectButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 601);
        MainWindow->setCursor(QCursor(Qt::ForbiddenCursor));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(40, 20, 261, 41));
        IPAddress = new QHBoxLayout(horizontalLayoutWidget);
        IPAddress->setObjectName(QString::fromUtf8("IPAddress"));
        IPAddress->setContentsMargins(0, 0, 0, 0);
        Text = new QLabel(horizontalLayoutWidget);
        Text->setObjectName(QString::fromUtf8("Text"));

        IPAddress->addWidget(Text);

        IP = new QLabel(horizontalLayoutWidget);
        IP->setObjectName(QString::fromUtf8("IP"));

        IPAddress->addWidget(IP);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(340, 20, 391, 41));
        Username = new QHBoxLayout(horizontalLayoutWidget_2);
        Username->setObjectName(QString::fromUtf8("Username"));
        Username->setContentsMargins(0, 0, 0, 0);
        Text2 = new QLabel(horizontalLayoutWidget_2);
        Text2->setObjectName(QString::fromUtf8("Text2"));

        Username->addWidget(Text2);

        UserInput = new QLineEdit(horizontalLayoutWidget_2);
        UserInput->setObjectName(QString::fromUtf8("UserInput"));

        Username->addWidget(UserInput);

        Button = new QPushButton(horizontalLayoutWidget_2);
        Button->setObjectName(QString::fromUtf8("Button"));

        Username->addWidget(Button);

        Chatting = new QPlainTextEdit(centralwidget);
        Chatting->setObjectName(QString::fromUtf8("Chatting"));
        Chatting->setGeometry(QRect(40, 90, 691, 381));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(40, 480, 601, 31));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(660, 480, 71, 31));
        Filelabel = new QLabel(centralwidget);
        Filelabel->setObjectName(QString::fromUtf8("Filelabel"));
        Filelabel->setGeometry(QRect(40, 520, 67, 21));
        FileCourse = new QLabel(centralwidget);
        FileCourse->setObjectName(QString::fromUtf8("FileCourse"));
        FileCourse->setGeometry(QRect(80, 520, 451, 21));
        FileSelectButton = new QPushButton(centralwidget);
        FileSelectButton->setObjectName(QString::fromUtf8("FileSelectButton"));
        FileSelectButton->setGeometry(QRect(550, 520, 89, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Chatting Program", nullptr));
        Text->setText(QApplication::translate("MainWindow", "IP Address : ", nullptr));
        IP->setText(QString());
        Text2->setText(QApplication::translate("MainWindow", "User Name : ", nullptr));
        Button->setText(QApplication::translate("MainWindow", "OK", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Send", nullptr));
        Filelabel->setText(QApplication::translate("MainWindow", "File : ", nullptr));
        FileCourse->setText(QString());
        FileSelectButton->setText(QApplication::translate("MainWindow", "File Select", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATTING_PROGRAM_H
