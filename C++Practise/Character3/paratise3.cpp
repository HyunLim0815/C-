/***********************************************************
  > File Name: paratise3.cpp
  > Author: admin
  > Mail: -----------------
  > Created Time: 2022年10月14日 星期五 16时01分11秒
  > Modified Time:2022年10月14日 星期五 16时01分11秒
 *******************************************************/

#include <iostream>

using namespace std;

int main(){
	double degrees, minutes, seconds;
	double result;
	const int middle_value = 60;

	cout << "Fisrst, enter the degrees:";
	cin >> degrees;


	cout << "Next, enter the minutes of arc:";
	cin >> minutes;


	cout << "Finally, enter the seconds of arc:";
	cin >> seconds;

	
	result = degrees + minutes / 60 + seconds / 3600;

	cout << degrees << " degrees, " 
		 << minutes << " minutes, "
		 << seconds << " seconds = " << result << " degress"
		 << endl;
	
	return 0;
}
