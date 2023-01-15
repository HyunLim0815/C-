/***********************************************************
  > File Name: pracitse3.cpp
  > Author: admin
  > Mail: -----------------
  > Created Time: 2022年10月11日 星期二 20时05分03秒
  > Modified Time:2022年10月11日 星期二 20时05分03秒
 *******************************************************/

#include <iostream>

using namespace std;

void show_mice();
void show_run();

int main(){
	show_mice();
	show_mice();
	show_run();
	show_run();
	return 0;
}

void show_mice(){
	cout << "Three blind mice." << endl;
}

void show_run(){
	cout << "See how they run." << endl;
}
