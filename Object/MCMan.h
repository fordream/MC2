//
//  MCMan.h
//  MC2
//
//  Created by Yun on 15/9/19.
//  Copyright (c) 2015 Yun All rights reserved.
//

#ifndef __MC2__MCMan__
#define __MC2__MCMan__

#include <stdio.h>
#include <iostream>
using namespace std;

enum Sex
{
    Man = 0,
    Woman,
};

class MCMan
{
public:
    
private:
    string  sName;              // name
    Sex     sSex;               // sex
    int     iOld;               // old
    
    float   fCurWage;           // current wage
    
    int     iLitleCircle = 5;   // little calculate circle
    int     iBigCircle = 10;    // big calculate circle
};

#endif /* defined(__MC2__MCMan__) */
