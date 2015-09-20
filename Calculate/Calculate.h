//
//  Calculate.h
//  MC2
//
//  Created by Yun on 15/9/18.
//  Copyright (c) 2015 Yun All rights reserved.
//

#ifndef __MC2__Calculate__
#define __MC2__Calculate__

#include <stdio.h>
#include "MCMath.h"

class Calculate
{
public:
    /*
     *  GetTimeDipositNYearsLater
     *
     *  param: fMonthCapital - capital of month
     *  param: fYearRate - rate of year
     *  param: n - num of year
     */
    double GetTimeDipositNYearsLater(float fMonthCapital, float fYearRate, int n);
    
    /*
     *  GetMonthTimeDipositOneYear
     *
     *  param: fMonthCapital - capital of month
     *  param: fYearRate - rate of year
     */
    double GetMonthTimeDipositOneYear(float fMonthCapital, float fYearRate);
    
    /*
     *  GetYearTimeDipositNYear
     *
     *  param: fYearCapital - capital of year
     *  param: fYearRate - rate of year
     *  param: n - num of year
     */
    double GetYearTimeDipositNYear(float fYearCapital, float fYearRate, int n);
    
    /*
     *  GetMoneyAfterNMonth
     *
     *  param: fCapital - capital of now
     *  param: fYearRate - rate of year
     *  param: n - num of year
     */
    double GetCapitalAfterNMonth(double fCapital, float fYearRate, int n);
    
    /*
     *  GetMoneyAfterNYear
     *
     *  param: fCapital - capital of now
     *  param: fYearRate - rate of year
     *  param: n - num of year
     */
    double GetMoneyAfterNYear(double fCapital, float fYearRate, int n);
    
    Calculate();
    ~Calculate();
};

#endif /* defined(__MC2__Calculate__) */
