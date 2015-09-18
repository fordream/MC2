//
//  Calculate.h
//  MC2
//
//  Created by 曹国运 on 15/9/18.
//  Copyright (c) 2015年 曹国运. All rights reserved.
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
     *  param: fMonthCapital - 月定存本金
     *  param: fYearRate - 年利率
     *  param: n - 年数
     */
    double GetTimeDipositNYearsLater(float fMonthCapital, float fYearRate, int n);
    
    /*
     *  GetMonthTimeDipositOneYear
     *
     *  param: fMonthCapital - 月定存本金
     *  param: fYearRate - 年利率
     */
    double GetMonthTimeDipositOneYear(float fMonthCapital, float fYearRate);
    
    /*
     *  GetYearTimeDipositNYear
     *
     *  param: fYearCapital - 年定存本金
     *  param: fYearRate - 年利率
     *  param: n - 年数
     */
    double GetYearTimeDipositNYear(float fYearCapital, float fYearRate, int n);
    
    Calculate();
    ~Calculate();
};

#endif /* defined(__MC2__Calculate__) */
