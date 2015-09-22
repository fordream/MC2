//
//  MCMoney.hpp
//  MC2
//
//  Created by Yun on 15/9/20.
//  Copyright © 2015  Yun. All rights reserved.
//

#ifndef MCMoney_hpp
#define MCMoney_hpp

#include <stdio.h>
#include "MCDef.h"
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
    double      dValue;         // value of money
    double      dCurValue;      // Current value of money
    int         iYearIndex;     // money in year
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
     *  param:  dMoney   -   money
     *  param:  mMoney   -   MONEY
     *  param:  mcMoney   -   MCMoney
     *  return: void   -   void
     */
    void    addMoney(double dMoney);
    void    addMoney(MONEY mMoney);
    friend void addMoney(MCMoney& mcMoney);
    
    /*
     *  subMoney
     *
     *  param:  dMoney   -   money
     *  param:  mMoney   -   MONEY
     *  param:  mcMoney   -   MCMoney
     *  return: void   -   void
     */
    void    subMoney(double dMoney);
    void    subMoney(MONEY mMoney);
    friend void subMoney(MCMoney& mcMoney);
    
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
    void    operator+=(MCMoney& mcMoney);
    void    operator+=(MONEY mMoney);
    void    operator-=(MCMoney& mcMoney);
    void    operator-=(MONEY mMoney);
    
private:
    double      m_dValue;         // value of money
    double      m_dCurValue;      // Current value of money
    int         m_iYearIndex;     // money in year
    float       m_fROD;           // rate of depreciation
    MONEY_TYPE  m_mtType;         // money type
    
public:
    MCMoney();
    MCMoney(MCMoney& mcMoney);
    MCMoney(MONEY mMoney);
    MCMoney(double dValue,
            double dCurValue,
            int iYearIndex,
            float fROD,
            MONEY_TYPE mtType);
    ~MCMoney();
};

#endif /* MCMoney_hpp */
