//
//  MCMoney.hpp
//  MC2
//
//  Created by Yun on 15/9/20.
//  Copyright (c) 2015  Yun. All rights reserved.
//

#ifndef MCMoney_hpp
#define MCMoney_hpp

#include <stdio.h>
#include "../../MCDef.h"
#include "../../Calculate/Calculate.h"
#include <iostream>

using namespace std;

enum MONEY_TYPE
{
    RenMinBi = 0,
    HongkongDollar,
    TWD,
    Dollar,
    Pound,
    Yen,
    Franc,
};

struct MONEY
{
    float       fValue;         // value of money
    float       fCurValue;      // Current value of money
    int         iYearIndex;     // money in year
    int         iCurYearIndex;  // current year
    float       fROD;           // rate of depreciation
    MONEY_TYPE  mtType;         // money type
};

class MCMoney
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
     *  param:  fMoney   -   money
     *  param:  mMoney   -   MONEY
     *  param:  mcMoney   -   MCMoney
     *  return: void   -   void
     */
    void    addMoney(float fMoney);
    void    addMoney(MONEY mMoney);
    void    addMoney(MCMoney& mcMoney);
    
    /*
     *  subMoney
     *
     *  param:  fMoney   -   money
     *  param:  mMoney   -   MONEY
     *  param:  mcMoney   -   MCMoney
     *  return: void   -   void
     */
    void    subMoney(float fMoney);
    void    subMoney(MONEY mMoney);
    void    subMoney(MCMoney& mcMoney);
    
    /*
     *  +, -, +=, -=
     *
     *  param:  mcMoney   -   MCMoney
     *  return: money   -   MCMoney
     */
    MCMoney operator+(MCMoney& mcMoney);
    MCMoney operator+(MONEY mMoney);
    MCMoney operator-(MCMoney& mcMoney);
    MCMoney operator-(MONEY mMoney);
    void    operator+=(MONEY mMoney);
    void    operator-=(MONEY mMoney);
    void operator+=(MCMoney& mcMoney);
    void operator-=(MCMoney& mcMoney);

private:
    float       m_fValue;         // value of money
    float       m_fCurValue;      // Current value of money
    int         m_iYearIndex;     // money in year
    int         m_iCurYearIndex;  // current year
    float       m_fROD;           // rate of depreciation
    MONEY_TYPE  m_mtType;         // money type

    int         m_deltaYear;      // delta years
    Calculate   *m_Calculate;     // calculate
    
public:
    MCMoney();
    MCMoney(MCMoney& mcMoney);
    MCMoney(MONEY mMoney);
    MCMoney(float fValue,
            float fCurValue,
            int iYearIndex,
            int iCurYearIndex,
            float fROD,
            MONEY_TYPE mtType);
    ~MCMoney();
};

#endif /* MCMoney_hpp */
