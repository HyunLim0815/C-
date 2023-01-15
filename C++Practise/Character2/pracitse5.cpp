/***********************************************************
  > File Name: pracitse5.cpp
  > Author: admin
  > Mail: -----------------
  > Created Time: 2022年10月11日 星期二 20时30分24秒
  > Modified Time:2022年10月11日 星期二 20时30分24秒
 *******************************************************/

#include <iostream>

using namespace std;
double treanslater(double);

int main(){
	cout << "Please enter a Celsius value:";
	double celsius;
	cin >> celsius;
	double fahrenheit = treanslater(celsius);
	cout << celsius << " degree Celsius is " << fahrenheit 
		 << " degrees Fahrenheit." << endl;
	return 0;
}

double treanslater(double n){
	return 1.8*n+32.0;
}

