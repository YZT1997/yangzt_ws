//
// Created by yangzt on 2020/11/10.
//
#include "qt_app_node.h"
#include "mainwindow.h"
#include "QApplication"

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    MainWindow window;
    window.show();

    return a.exec();

}
