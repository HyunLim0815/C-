/***********************************************************
  > File Name: pracitse7.cpp
  > Author: admin
  > Mail: -----------------
  > Created Time: 2022年10月12日 星期三 16时30分55秒
  > Modified Time:2022年10月12日 星期三 16时30分55秒
 *******************************************************/

#include <iostream>

using namespace std;
void time_shower(int,int);
int main(){
	int hours,minutes;
	cout << "Enter the number of hours:";
	cin >> hours;
	cout << "Enter the number of minutes:";
	cin >> minutes;
	time_shower(hours, minutes);
}

void time_shower(int hour, int minute){
	cout << "Time: " << hour << ":" << minute << endl;
}

