/***********************************************************
  > File Name: hexoct.cpp
  > Author: admin
  > Mail: -----------------
  > Created Time: 2022年10月14日 星期五 14时39分08秒
  > Modified Time:2022年10月14日 星期五 14时39分08秒
 *******************************************************/

#include <iostream>

int main(){
	using namespace std;
	int chest = 42;
	int waist = 0x42;
	int inseam = 042;

	cout << "Monsieur cuts a striking figure!\n";
	cout << "chest = " << chest << " {42 in decimal}\n";
	cout << "waist = " << waist << " {0x42 in hex}\n";
	cout << "inseam = " << inseam << "{042 in octal}\n";
	return 0;
}

