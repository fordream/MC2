//
//  MCMan.h
//  MC2
//
//  Created by 曹国运 on 15/9/19.
//  Copyright (c) 2015年 曹国运. All rights reserved.
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
    string  sName;              // 名字
    Sex     sSex;               // 性别
    int     iOld;               // 年龄
    
    float   fCurWage;           // 当前工资
    
    int     iLitleCircle = 5;   // 小计算周期
    int     iBigCircle = 10;    // 大计算周期
};

#endif /* defined(__MC2__MCMan__) */
