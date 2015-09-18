//
//  MCGoldEgg.h
//  MC2
//
//  Created by 曹国运 on 15/9/19.
//  Copyright (c) 2015年 曹国运. All rights reserved.
//

#ifndef __MC2__MCGoldEgg__
#define __MC2__MCGoldEgg__

#include <stdio.h>
#include <iostream>
using namespace std;

class MCGoldEgg
{
public:
    int     getValue(void) const;
    int     getMonth(void) const;
    float   getYearRate(void) const;
    double  getCapital(void) const;
    string  getGooseName(void) const;
    
public:
    void    setValue(int value);
    void    setMonth(int month);
    void    setYearRate(float yearRate);
    void    setCapital(double capital);
    void    setGooseName(string gooseName);
    
private:
    int     iValue;         // 金蛋价值
    int     iMonth;          // 金蛋被孕育时间
    float   fYearRate;      // 金蛋孵化利率
    double  dCapital;       // 金蛋本金，来自金鹅
    string  sGooseName;     // 金鹅名字
    
public:
    MCGoldEgg();
    MCGoldEgg(int value, int month, float yearRate, double capital, string gooseName);
    ~MCGoldEgg();
};

#endif /* defined(__MC2__MCGoldEgg__) */
