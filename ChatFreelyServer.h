#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ChatFreelyServer.h"

class ChatFreelyServer : public QMainWindow
{
    Q_OBJECT

public:
    ChatFreelyServer(QWidget *parent = Q_NULLPTR);

private:
    Ui::ChatFreelyServerClass ui;
};
