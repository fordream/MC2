//
//  MCMath.cpp
//  MC2
//
//  Created by 曹国运 on 15/9/18.
//  Copyright (c) 2015年 曹国运. All rights reserved.
//

#include "MCMath.h"
#include <math.h>

double GetAnProduct(float a, float q, int n)
{
    return a * pow(q, n-1);
}

double GetSumOfAnProduct(float a, float q, int n)
{
    if (q == 1)
    {
        return a * n;
    }else
    {
        double deltaQN = 1 - GetAnProduct(q, q, n);
        double deltaQ = 1 - q;
        return (a * deltaQN) / deltaQ;
    }
    
}
