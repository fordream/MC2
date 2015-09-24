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
    void    addMoney(const MONEY mMoney);
    void    addMoney(const MCMoney& mcMoney);
    
    /*
     *  subMoney
     *
     *  param:  fMoney   -   money
     *  param:  mMoney   -   MONEY
     *  param:  mcMoney   -   MCMoney
     *  return: void   -   void
     */
    void    subMoney(float fMoney);
    void    subMoney(const MONEY mMoney);
    void    subMoney(const MCMoney& mcMoney);
    
    /*
     *  +, -, +=, -=
     *
     *  param:  mcMoney   -   MCMoney
     *  return: money   -   MCMoney
     */
    MCMoney operator+(MCMoney& mcMoney);
    MCMoney operator+(const MONEY mMoney);
    MCMoney operator-(const MCMoney& mcMoney);
    MCMoney operator-(const MONEY mMoney);
    void    operator+=(const MONEY mMoney);
    void    operator-=(const MONEY mMoney);
    void operator+=(const MCMoney& mcMoney);
    void operator-=(const MCMoney& mcMoney);

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
    MCMoney(const MCMoney& mcMoney);
    MCMoney(const MONEY mMoney);
    MCMoney(float fValue = 0,
            float fCurValue = 0,
            int iYearIndex = 2015,
            int iCurYearIndex = 2015,
            float fROD = 0.04,
            MONEY_TYPE mtType = RenMinBi);
    ~MCMoney();
};

#endif /* MCMoney_hpp */
