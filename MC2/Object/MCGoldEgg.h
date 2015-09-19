//
//  MCGoldEgg.h
//  MC2
//
//  Created by Yun on 15/9/19.
//  Copyright (c) 2015 Yun All rights reserved.
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
    int     iValue;         // value of egg
    int     iMonth;          // month time of egg be breed
    float   fYearRate;      // year rate of egg be breed
    double  dCapital;       // capital of egg's mather goose
    string  sGooseName;     // name of goose
    
public:
    MCGoldEgg();
    MCGoldEgg(int value, int month, float yearRate, double capital, string gooseName);
    ~MCGoldEgg();
};

#endif /* defined(__MC2__MCGoldEgg__) */
