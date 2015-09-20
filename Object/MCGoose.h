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
    void    describe(void) const;
private:
    string  sName;
    int     iMonthOld;   // month
    int     iValue;      // value
    float   fYearRate;   // year rate
};

#endif /* defined(__MC2__MCGoose__) */
