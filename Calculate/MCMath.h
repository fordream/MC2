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

//Geometric sequence
//An=a * (q^n)
double GetAnProduct(float a, float q, int n);
//A1+A2+...+An
double GetSumOfAnProduct(float a, float q, int n);

#endif /* defined(__MC2__MCMath__) */
