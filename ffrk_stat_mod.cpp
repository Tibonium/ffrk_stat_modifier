#include "ffrk_stat_mod.h"
#include "ui_ffrk_stat_mod.h"

ffrk_stat_mod::ffrk_stat_mod(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ffrk_stat_mod)
{
    ui->setupUi(this);
}

ffrk_stat_mod::~ffrk_stat_mod()
{
    delete ui;
}
