/********************************************************************************
** Form generated from reading UI file 'Talk.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TALK_H
#define UI_TALK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Talk
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Talk)
    {
        if (Talk->objectName().isEmpty())
            Talk->setObjectName(QString::fromUtf8("Talk"));
        Talk->resize(400, 300);
        Talk->setMinimumSize(QSize(400, 300));
        Talk->setMaximumSize(QSize(400, 300));
        centralwidget = new QWidget(Talk);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 250, 381, 25));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 220, 381, 25));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 381, 201));
        Talk->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Talk);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Talk->setStatusBar(statusbar);

        retranslateUi(Talk);
        QObject::connect(lineEdit, SIGNAL(textChanged(QString)), textEdit, SLOT(setText(QString)));

        QMetaObject::connectSlotsByName(Talk);
    } // setupUi

    void retranslateUi(QMainWindow *Talk)
    {
        Talk->setWindowTitle(QApplication::translate("Talk", "Talk", nullptr));
        pushButton->setText(QApplication::translate("Talk", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Talk: public Ui_Talk {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TALK_H
