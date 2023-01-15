/***********************************************************
  > File Name: hexoct2.cpp
  > Author: admin
  > Mail: -----------------
  > Created Time: 2022年10月14日 星期五 14时47分16秒
  > Modified Time:2022年10月14日 星期五 14时47分16秒
 *******************************************************/

#include <iostream>
using namespace std;

int main(){
	using namespace std;
	int chest = 42;
	int waist = 42;
	int inseam = 42;

	cout << "Monsieur cuts a striking figure!" << endl;
	cout << "chest = " << chest << " (decimal for 42)" << endl;
	cout << hex;
	cout << "waist = " << waist << " {hexadecimal for 42}" 
		 <<endl;
	cout << oct ;
	cout << "inseam = " << inseam << " (octal for 42)" << endl;
	return 0;
}

