/********************************************************************************
** Form generated from reading UI file 'ChatFreelyServer.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATFREELYSERVER_H
#define UI_CHATFREELYSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatFreelyServerClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ChatFreelyServerClass)
    {
        if (ChatFreelyServerClass->objectName().isEmpty())
            ChatFreelyServerClass->setObjectName(QString::fromUtf8("ChatFreelyServerClass"));
        ChatFreelyServerClass->resize(600, 400);
        menuBar = new QMenuBar(ChatFreelyServerClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        ChatFreelyServerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ChatFreelyServerClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ChatFreelyServerClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(ChatFreelyServerClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        ChatFreelyServerClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ChatFreelyServerClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ChatFreelyServerClass->setStatusBar(statusBar);

        retranslateUi(ChatFreelyServerClass);

        QMetaObject::connectSlotsByName(ChatFreelyServerClass);
    } // setupUi

    void retranslateUi(QMainWindow *ChatFreelyServerClass)
    {
        ChatFreelyServerClass->setWindowTitle(QCoreApplication::translate("ChatFreelyServerClass", "ChatFreelyServer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatFreelyServerClass: public Ui_ChatFreelyServerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATFREELYSERVER_H
