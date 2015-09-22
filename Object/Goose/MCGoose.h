//
//  MCGoose.h
//  MC2
//
//  Created by Yun on 15/9/19.
//  Copyright (c) 2015 Yun All rights reserved.
//

#ifndef __MC2__MCGoose__
#define __MC2__MCGoose__

#include <stdio.h>
#include <iostream>

#include "Calculate.h"
#include "MCGoldEgg.h"

using namespace std;

class MCGoose
{
public:
    /*
     *  describe
     *
     *  param:  void   -   void
     *  return: void   -   void
     */
    void    describe(void) const;
    
    /*
     *  addMoney
     *
     *  param:  dMoney   -   money
     *  param:  sDeclare   -   declare
     *  return: void   -   void
     */
    void    addMoney(double dMoney);
    void    addMoney(double dMoney, string sDeclare);
    
    /*
     *  subMoney
     *
     *  param:  dMoney   -   money
     *  param:  sDeclare   -   declare
     *  return: void   -   void
     */
    void    subMoney(double dMoney);
    void    subMoney(double dMoney, string sDeclare);
    
public:
    void    setName(string sName);          //  name
    void    setMonthOld(int iMonthOld);     //  month old
    void    setValue(int iValue);           //  value
    float   setYearRate(float fYearRate);   //  year rate
    
    string  getName(void)           const;   //  goose name
    int     getCurMonthOld(void)    const;   //  goose month old
    int     getCurYearOld(void)     const;   //  goose year old
    int     getCurValue(void)       const;   //  current value
    float   getCurYearRate(void)    const;   //  current year rate
    
private:
    string  m_sName;
    int     m_iMonthOld;   // month
    int     m_iValue;      // value
    float   m_fYearRate;   // year rate
    
public:
    MCGoose();
    ~MCGoose();
};

#endif /* defined(__MC2__MCGoose__) */
