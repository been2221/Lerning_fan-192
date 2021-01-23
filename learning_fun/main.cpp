#include "learning_fun.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Learning_fun w;
    w.updateFun();
    w.show();
    return a.exec();
}
