#include "ffrk_stat_mod.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ffrk_stat_mod w;
    w.show();

    return a.exec();
}
