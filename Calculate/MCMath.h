//
//  MCMath.h
//  MC2
//
//  Created by Yun on 15/9/18.
//  Copyright (c) 2015 Yun All rights reserved.
//

#ifndef __MC2__MCMath__
#define __MC2__MCMath__

#include <stdio.h>
#include <iostream>
using namespace std;

//Geometric sequence
//An=a * (q^n)
double GetAnProduct(float a, float q, int n);
//A1+A2+...+An
double GetSumOfAnProduct(float a, float q, int n);


// Format num str as '25,458,123'
string FormatNum(double num);


#endif /* defined(__MC2__MCMath__) */
