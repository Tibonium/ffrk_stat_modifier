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


double ffrk_stat_mod::getAttentuation(const StatModArray* poStatMods)
{
    double modifier = poStatMods->getModifier();
    if( poStatMods->getAttenuationCurve() == StatModifiers::LOG )
    {
        modifier = threshold + r * std::log(modifier - threshold + i);
    }
    else
    {
        modifier = threshold - r * std::log10(modifier - threshold + i);
    }
    return modifier;
}
