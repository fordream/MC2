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

#include "Calculate.h"

using namespace std;

struct GOLD_EGG
{
    int     iValue;
    int     iMonth;
    float   fYearRate;
    double  dCapital;
    string  sGooseName;
};

class MCGoldEgg
{
public:
    /*
     *  describe
     *
     *  param:  void   -   void
     *  return: void   -   void
     */
    void        describe(void) const;
    
    /*
     *  growthMonths
     *
     *  param:  monthCount   -   monthCount months after
     *  param:  yearRate   -   temp yearRate for this growth
     *  return: void   -   void
     */
    void        growthMonths(int monthCount = 1);
    void        growthMonths(int monthCount, float yearRate);
    
    /*
     *  growthYears
     *
     *  param:  yearCount   -   yearCount years after
     *  param:  yearRate   -   temp yearRate for this growth
     *  return: void   -   void
     */
    void        growthYears(int yearCount = 1);
    void        growthYears(int yearCount, float yearRate);
    
    /*
     *  costEggPercent
     *
     *  param:  fPercent   -   percent of egg value
     *  return: dCosted   -   costed of value
     */
    double      costEggPercent(float fPercent);

    /*
     *  costEggValue
     *
     *  param:  dValue   -   value of egg
     *  return: dCosted   -   cost of value
     */
    double      costEggValue(double dValue);
    
public:
    double      getValue(void) const;
    int         getMonth(void) const;
    float       getYearRate(void) const;
    double      getCapital(void) const;
    string      getGooseName(void) const;
    
public:
    void    setMonth(int month);
    void    setValue(double value);
    void    setYearRate(float yearRate);
    void    setCapital(double capital);
    void    setGooseName(string gooseName);
    
private:
    int         m_iMonth;          // month time of egg be breed
    float       m_fYearRate;      // year rate of egg be breed
    double      m_dValue;         // value of egg
    double      m_dCapital;       // capital of egg's mather goose
    string      m_sGooseName;     // name of goose
    
    Calculate   *m_Calculate;     // calculate
    
public:
    MCGoldEgg();
    MCGoldEgg(GOLD_EGG eggData);
    MCGoldEgg(int value, int month, float yearRate, double capital, string gooseName);
    ~MCGoldEgg();
};

#endif /* defined(__MC2__MCGoldEgg__) */
