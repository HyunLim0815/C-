/***********************************************************
  > File Name: paratise4.cpp
  > Author: admin
  > Mail: -----------------
  > Created Time: 2022年10月25日 星期二 16时38分44秒
  > Modified Time:2022年10月25日 星期二 16时38分44秒
 *******************************************************/

#include <iostream>

using namespace std;
int main(){
	int time;
	
	cout << "Enter the number of seconds:";
	cin >> time;

	int hours = time / 3600;
	int minutes = (time % 3600) / 60;
	int seconds = time - minutes * 60 - hours * 3600;
	int days = hours / 24;

	cout << time << " seconds = " << days << " days, "
		 << hours << " hours, " << minutes << " minutes, "
		 << seconds << " seconds." << endl;
	return 0;
}
