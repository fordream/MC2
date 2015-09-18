//
//  MCMath.h
//  MC2
//
//  Created by 曹国运 on 15/9/18.
//  Copyright (c) 2015年 曹国运. All rights reserved.
//

#ifndef __MC2__MCMath__
#define __MC2__MCMath__

#include <stdio.h>
#include <iostream>

//等比数列
//An=a * (q^n)
double GetAnProduct(float a, float q, int n);
//A1+A2+...+An
double GetSumOfAnProduct(float a, float q, int n);

#endif /* defined(__MC2__MCMath__) */
