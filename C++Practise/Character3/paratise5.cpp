/***********************************************************
  > File Name: paratise5.cpp
  > Author: admin
  > Mail: -----------------
  > Created Time: 2022年10月25日 星期二 17时21分11秒
  > Modified Time:2022年10月25日 星期二 17时21分11秒
 *******************************************************/

#include <iostream>

using namespace std;

int main(){
	long long world_population,us_population;
	cout << "Please enter the words population:";
	cin >> world_population;
	cout << "Please enter the  population of us:";
	cin >> us_population;
	double per = double(us_population) / world_population;
	per = per * 100;
	cout << "The population of the US is " << per << "%" 
		 << " of the world population. " << endl;
	return 0;
}
