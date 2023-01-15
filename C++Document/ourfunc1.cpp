/***********************************************************
  > File Name: ourfunc.cpp
  > Author: admin
  > Mail: -----------------
  > Created Time: 2022年10月09日 星期日 21时29分24秒
  > Modified Time:2022年10月09日 星期日 21时29分24秒
 *******************************************************/

#include <iostream>


void simon(int);
using namespace std;
int main(){

	simon(3);
	cout << "Pick an intger: ";
	int count;
	cin >> count;
	simon(count);
	cout << "Done!" << endl;
	return 0;
}

void simon(int n){
	using namespace std;
	cout << "Simon says touch your toes " << n 
		 << " times." << endl;
}
