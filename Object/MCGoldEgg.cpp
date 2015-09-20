//
//  MCGoldEgg.cpp
//  MC2
//
//  Created by Yun on 15/9/19.
//  Copyright (c) 2015 Yun All rights reserved.
//

#include "MCGoldEgg.h"


MCGoldEgg::MCGoldEgg(int value, int month, float yearRate, double capital, string gooseName)
:m_dValue(value),
m_iMonth(month),
m_fYearRate(yearRate),
m_dCapital(capital),
m_sGooseName(gooseName)
{
    m_Calculate = new Calculate();
}

MCGoldEgg::MCGoldEgg(GOLD_EGG eggData)
:m_dValue(eggData.iValue),
m_iMonth(eggData.iMonth),
m_fYearRate(eggData.fYearRate),
m_dCapital(eggData.dCapital),
m_sGooseName(eggData.sGooseName)
{
    m_Calculate = new Calculate();
}

void MCGoldEgg::describe() const
{
    cout<<"Good, your goose <"<<m_sGooseName<<"> 's egg has growed!"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"Capital      -> "<<m_dCapital<<endl;
    cout<<"YearRate     -> "<<m_fYearRate<<endl;
    cout<<"Months       -> "<<m_iMonth<<endl;
    cout<<"Value  ****  -> "<<m_dValue<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<endl;
}

void MCGoldEgg::growthMonths(int monthCount)
{
    growthMonths(monthCount, m_fYearRate);
}

void MCGoldEgg::growthMonths(int monthCount, float yearRate)
{
    m_iMonth += monthCount;
    double fAllBefore = m_dCapital + m_dValue;
    double fAllMoney = m_Calculate->GetCapitalAfterNMonth(fAllBefore, yearRate, monthCount);
    m_dValue = fAllMoney - m_dCapital;
}

void MCGoldEgg::growthYears(int yearCount)
{
    growthYears(yearCount, m_fYearRate);
}

void MCGoldEgg::growthYears(int yearCount, float yearRate)
{
    m_iMonth += 12 * yearCount;
    double fAllBefore = m_dCapital + m_dValue;
    double fAllMoney = m_Calculate->GetMoneyAfterNYear(fAllBefore, yearRate, yearCount);
    m_dValue = fAllMoney - m_dCapital;
}

double MCGoldEgg::getValue() const
{
    return m_dValue;
}

int MCGoldEgg::getMonth()const
{
    return m_iMonth;
}

float MCGoldEgg::getYearRate()const
{
    return m_fYearRate;
}

double MCGoldEgg::getCapital()const
{
    return m_dCapital;
}

string MCGoldEgg::getGooseName()const
{
    return m_sGooseName;
}

void MCGoldEgg::setValue(double value)
{
    m_dValue = value;
}

void MCGoldEgg::setMonth(int month)
{
    m_iMonth = month;
}

void MCGoldEgg::setYearRate(float yearRate)
{
    m_fYearRate = yearRate;
}

void MCGoldEgg::setCapital(double capital)
{
    m_dCapital = capital;
}

void MCGoldEgg::setGooseName(string gooseName)
{
    m_sGooseName = gooseName;
}


MCGoldEgg::MCGoldEgg()
:m_dValue(0),
m_iMonth(0),
m_fYearRate(0),
m_dCapital(0),
m_sGooseName("")
{
    m_Calculate = new Calculate();
}
MCGoldEgg::~MCGoldEgg()
{
    delete m_Calculate;
}

