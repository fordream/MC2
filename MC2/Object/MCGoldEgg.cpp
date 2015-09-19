//
//  MCGoldEgg.cpp
//  MC2
//
//  Created by Yun on 15/9/19.
//  Copyright (c) 2015 Yun All rights reserved.
//

#include "MCGoldEgg.h"


MCGoldEgg::MCGoldEgg(int value, int month, float yearRate, double capital, string gooseName)
:iValue(value),
iMonth(month),
fYearRate(yearRate),
dCapital(capital),
sGooseName(gooseName)
{
}

int MCGoldEgg::getValue() const
{
    return iValue;
}

int MCGoldEgg::getMonth()const
{
    return iMonth;
}

float MCGoldEgg::getYearRate()const
{
    return fYearRate;
}

double MCGoldEgg::getCapital()const
{
    return dCapital;
}

string MCGoldEgg::getGooseName()const
{
    return sGooseName;
}

void MCGoldEgg::setValue(int value)
{
    iValue = value;
}

void MCGoldEgg::setMonth(int month)
{
    iMonth = month;
}

void MCGoldEgg::setYearRate(float yearRate)
{
    fYearRate = yearRate;
}

void MCGoldEgg::setCapital(double capital)
{
    dCapital = capital;
}

void MCGoldEgg::setGooseName(string gooseName)
{
    sGooseName = gooseName;
}


MCGoldEgg::MCGoldEgg()
{}
MCGoldEgg::~MCGoldEgg()
{}

