#include <iostream>
#include "Calculate/Calculate.h"
#include "Object/Money/MCMoney.hpp"
using namespace std;

int main(int argc, char const *argv[])
{
//	Calculate* cal = new Calculate();
//	float fMonthCapital, fYearRate;
//	int n;
	
//	int isContinue = 1;
//	do{
//		fMonthCapital = 0.0;
//		fYearRate = 0.0;
//		n = 0;
//		cout<<"Please input Month Time Desipot Capital :";
//		cin>>fMonthCapital;
//		
//		cout <<"Please input Year Rate :";
//		cin>> fYearRate;
//		
//		cout<<"Please input count of year :";
//		cin>>n;
//		
//		cal->GetTimeDipositNYearsLater(fMonthCapital, fYearRate, n);
//		
//		
//		cout<<"Input 1 for Continue, else any key to Exit ! ...";
//		cin>>isContinue;
//		cout<<"==========================================="<<endl;
//	} while(isContinue == 1);

	MCMoney money1(100.0);
	MCMoney money2(200.0);
	
	MCMoney money3 = money1 + money2;
	money3.describe();

	return 0;
}
