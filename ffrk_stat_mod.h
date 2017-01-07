#ifndef FFRK_STAT_MOD_H
#define FFRK_STAT_MOD_H

#include <QWidget>
#include "StatModArray.h"

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

    double getMagicModifier(const StatModArray* poStatMods);
    double getAttackModifier(const StatModArray* poStatMods);
    double getDefenseModifier(const StatModArray* poStatMods);

    double getAtkfromDefConversion(const StatModArray* poStatMods);
    double getAtkfromCurrentHP();

    double getAttentuation(const StatModArray* poStatMods);
};

#endif // FFRK_STAT_MOD_H
