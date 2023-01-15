/***********************************************************
  > File Name: pracitse6.cpp
  > Author: admin
  > Mail: -----------------
  > Created Time: 2022年10月12日 星期三 16时24分05秒
  > Modified Time:2022年10月12日 星期三 16时24分05秒
 *******************************************************/

#include <iostream>

using namespace std;
double translate(double);

int main(){
	double light_years;
	cout << "Enter the number of light years:";
	cin >> light_years;
	cout << light_years <<  " light years = " 
		 << translate(light_years) 
		 << " astronomical unite." << endl;
	return 0;
}

double translate(double x){
	return x * 63240;
}
