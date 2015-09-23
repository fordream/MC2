//
//  MCMoney.cpp
//  MC2
//
//  Created by Yun on 15/9/20.
//  Copyright (c) 2015  Yun. All rights reserved.
//

#include "MCMoney.hpp"
#include "../../Calculate/Calculate.h"

MCMoney::MCMoney(MCMoney& mcMoney)
{
	m_fValue 		= mcMoney.m_fValue;
	m_fCurValue 	= mcMoney.m_fCurValue;
	m_iYearIndex	= mcMoney.m_iYearIndex;
	m_iCurYearIndex	= mcMoney.iCurYearIndex;
	m_fROD 			= mcMoney.m_fROD;
	m_mtType		= mcMoney.m_mtType; 

	m_deltaYear 	= m_iYearIndex - m_iCurYearIndex;
}

MCMoney::MCMoney(MONEY mMoney)
{
	m_fValue 		= mMoney.fValue;
	m_fCurValue 	= mMoney.fCurValue;
	m_iYearIndex 	= mMoney.iYearIndex;
	m_iCurYearIndex	= mMoney.iCurYearIndex;
	m_fROD 			= mMoney.fROD;
	m_mtType 		= mMoney.mtType;

	m_deltaYear 	= m_iYearIndex - m_iCurYearIndex;
}

MCMoney::MCMoney(float fValue,
            float fCurValue,
            int iYearIndex,
            int iCurYearIndex,
            float fROD,
            MONEY_TYPE mtType)
:m_fValue(fValue),
m_fCurValue(fCurValue),
m_iYearIndex(iYearIndex),
m_iCurYearIndex(iCurYearIndex),
m_fROD(fROD),
m_mtType(mtType)
{
	m_deltaYear 	= m_iYearIndex - m_iCurYearIndex;
}

void MCMoney::describe(void) const
{
	cout<<"Good, this money describe()"endl;
	cout<<"-----------------------------------------"<<endl;
	cout<<"Value 		-> "<<m_fValue<<endl;
	cout<<"CurValue 	-> "<<m_fCurValue<<endl;
	cout<<"YearIndex 	-> "<<m_iYearIndex<<endl;
	cout<<"CurYearIndex -> "<<m_iCurYearIndex<<endl;
	cout<<"DeltaYears	-> "<<m_deltaYear<<endl;
	cout<<"ROD 			-> "<<m_fROD<<endl;
	cout<<"Type 		->"<<mtType<<endl;
	cout<<"-----------------------------------------"<<endl;
}

void MCMoney::addMoney(float fMoney)
{
	m_fValue 	+= fMoney;
	m_fCurValue += GetMoneyBeforeNYear(fMoney, -m_fROD,	m_deltaYear);
}
void MCMoney::addMoney(MONEY mMoney)
{
	if (mMoney.mtType != m_mtType)
	{
		/* code */
		// switch money type
	}
	m_fCurValue += mMoney.fCurValue;
	m_fValue = GetMoneyAfterNYear(m_fCurValue, -m_fROD, m_deltaYear);
}
friend void MCMoney::addMoney(MCMoney& mcMoney)
{
	if (mcMoney.m_mtType != m_mtType)
	{
		/* code */
		// switch money type
	}
	m_fCurValue += mcMoney.m_fCurValue;
	m_fValue = GetMoneyAfterNYear(m_fCurValue, -m_fROD, m_deltaYear);
}

void MCMoney::subMoney(float fMoney)
{
	m_fValue 	-= fMoney;
	m_fCurValue -= GetMoneyBeforeNYear(fMoney, -m_fROD,	m_deltaYear);
}
void MCMoney::subMoney(MONEY mMoney)
{
	if (mMoney.mtType != m_mtType)
	{
		/* code */
		// switch money type
	}
	m_fCurValue -= mMoney.fCurValue;
	m_fValue = GetMoneyAfterNYear(m_fCurValue, -m_fROD, m_deltaYear);
}
friend void MCMoney::subMoney(MCMoney& mcMoney)
{
	if (mcMoney.m_mtType != m_mtType)
	{
		/* code */
		// switch money type
	}
	m_fCurValue -= mcMoney.m_fCurValue;
	m_fValue = GetMoneyAfterNYear(m_fCurValue, -m_fROD, m_deltaYear);
}

MCMoney MCMoney::operator+(MCMoney& mcMoney)
{
	if (mcMoney.m_mtType != m_mtType)
	{
		/* code */
		// switch money type
	}
	float fCurValue = m_fCurValue + mcMoney.m_fCurValue;
	float fValue = GetMoneyAfterNYear(m_fCurValue, -m_fROD, m_deltaYear);

	return MCMoney(fValue, 
		fCurValue, 
		m_iYearIndex, 
		m_iCurYearIndex, 
		m_fROD, 
		m_mtType);
}
MCMoney MCMoney::operator+(MONEY mMoney)
{
	if (mMoney.mtType != m_mtType)
	{
		/* code */
		// switch money type
	}
	float fCurValue = m_fCurValue + mMoney.fCurValue;
	float fValue = GetMoneyAfterNYear(m_fCurValue, -m_fROD, m_deltaYear);

	return MCMoney(fValue, 
		fCurValue, 
		m_iYearIndex, 
		m_iCurYearIndex, 
		m_fROD, 
		m_mtType);
}

MCMoney MCMoney::operator-(MCMoney& mcMoney)
{
	if (mcMoney.m_mtType != m_mtType)
	{
		/* code */
		// switch money type
	}
	float fCurValue = m_fCurValue - mcMoney.m_fCurValue;
	float fValue = GetMoneyAfterNYear(m_fCurValue, -m_fROD, m_deltaYear);

	return MCMoney(fValue, 
		fCurValue, 
		m_iYearIndex, 
		m_iCurYearIndex, 
		m_fROD, 
		m_mtType);
}
MCMoney MCMoney::operator-(MONEY mMoney)
{
	if (mMoney.mtType != m_mtType)
	{
		/* code */
		// switch money type
	}
	float fCurValue = m_fCurValue - mMoney.fCurValue;
	float fValue = GetMoneyAfterNYear(m_fCurValue, -m_fROD, m_deltaYear);

	return MCMoney(fValue, 
		fCurValue, 
		m_iYearIndex, 
		m_iCurYearIndex, 
		m_fROD, 
		m_mtType);
}

void MCMoney::operator+=(MONEY mMoney)
{
	if (mMoney.mtType != m_mtType)
	{
		/* code */
		// switch money type
	}
	m_fCurValue += mMoney.fCurValue;
	m_fValue = GetMoneyAfterNYear(m_fCurValue, -m_fROD, m_deltaYear);
}
void MCMoney::operator-=(MONEY mMoney)
{
	if (mMoney.mtType != m_mtType)
	{
		/* code */
		// switch money type
	}
	m_fCurValue -= mMoney.fCurValue;
	m_fValue = GetMoneyAfterNYear(m_fCurValue, -m_fROD, m_deltaYear);
}

friend void MCMoney::operator+=(MCMoney& mcMoney);
{
	if (mcMoney.m_mtType != m_mtType)
	{
		/* code */
		// switch money type
	}
	m_fCurValue += mcMoney.m_fCurValue;
	m_fValue = GetMoneyAfterNYear(m_fCurValue, -m_fROD, m_deltaYear);
}
friend void MCMoney::operator-=(MCMoney& mcMoney);
{
	if (mcMoney.m_mtType != m_mtType)
	{
		/* code */
		// switch money type
	}
	m_fCurValue -= mcMoney.m_fCurValue;
	m_fValue = GetMoneyAfterNYear(m_fCurValue, -m_fROD, m_deltaYear);
}


MCMoney::MCMoney()
{}
MCMoney::~MCMoney()
{}