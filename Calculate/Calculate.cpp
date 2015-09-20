//
//  Calculate.cpp
//  MC2
//
//  Created by Yun on 15/9/18.
//  Copyright (c) 2015 Yun All rights reserved.
//

#include "Calculate.h"
#include <iostream>

using namespace std;

double Calculate::GetTimeDipositNYearsLater(float fMonthCapital, float fYearRate, int n)
{
    cout<<endl;
    cout<<"Month time deposit   -> "<<fMonthCapital<<" Yuan ."<<endl;
    cout<<"Year Rate            -> "<<fYearRate<<endl;
    cout<<"Num of year          -> "<<n<<" years after ."<<endl;
    
    double fYearCapital = GetMonthTimeDipositOneYear(fMonthCapital, fYearRate);
    double fNYearCapital = GetYearTimeDipositNYear(fYearCapital, fYearRate, n);
    cout<<endl;
    cout<<"Every year time deposit capital  -> "<<fYearCapital<<endl;
    cout<<n<<" years later                   -> "<<fNYearCapital<<endl;
    cout<<endl;
    
    return fNYearCapital;
}

double Calculate::GetMonthTimeDipositOneYear(float fMonthCapital, float fYearRate)
{
    float fMonthRate = fYearRate / 12 + 1.0; //month Rate
    double dYearCapital = GetSumOfAnProduct(fMonthCapital, fMonthRate, 12);
    return dYearCapital;
}

double Calculate::GetYearTimeDipositNYear(float fYearCapital, float fYearRate, int n)
{
    fYearRate += 1;
    double dNYearCapital = 	GetSumOfAnProduct(fYearCapital, fYearRate, n);
    return  dNYearCapital;
}

double Calculate::GetCapitalAfterNMonth(double fCapital, float fYearRate, int n)
{
    float fMonthRate = fYearRate / 12 + 1.0; //month Rate
    return GetAnProduct(fCapital, fMonthRate, n);
}

double Calculate::GetMoneyAfterNYear(double fCapital, float fYearRate, int n)
{
    fYearRate += 1.0; //month Rate
    return GetAnProduct(fCapital, fYearRate, n);
}

Calculate::Calculate()
{
}

Calculate::~Calculate()
{
}
