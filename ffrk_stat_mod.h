#ifndef FFRK_STAT_MOD_H
#define FFRK_STAT_MOD_H

#include <QWidget>

namespace Ui {
class ffrk_stat_mod;
}

class ffrk_stat_mod : public QWidget
{
    Q_OBJECT

public:
    explicit ffrk_stat_mod(QWidget *parent = 0);
    ~ffrk_stat_mod();

private:
    Ui::ffrk_stat_mod *ui;
};

#endif // FFRK_STAT_MOD_H
