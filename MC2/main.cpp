#include <iostream>
#include "Calculate/Calculate.h"
using namespace std;

int main(int argc, char const *argv[])
{
	Calculate* cal = new Calculate();
	float fMonthCapital, fYearRate;
	int n;
	
	int isContinue = 1;
	do{
		fMonthCapital = 0.0;
		fYearRate = 0.0;
		n = 0;
		cout<<"请输入月定存本金：";
		cin>>fMonthCapital;
		
		cout <<"请输入年利率:";
		cin>> fYearRate;
		
		cout<<"请输入年数：";
		cin>>n;
		
		cal->GetTimeDipositNYearsLater(fMonthCapital, fYearRate, n);
		
		
		cout<<"如果继续请输入 1 ，否则任意键退出。。。";
		cin>>isContinue;
		cout<<"==========================================="<<endl;
	} while(isContinue == 1);
	
	return 0;
}
