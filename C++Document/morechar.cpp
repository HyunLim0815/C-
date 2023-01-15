/***********************************************************
  > File Name: morechar.cpp
  > Author: admin
  > Mail: -----------------
  > Created Time: 2022年10月14日 星期五 14时59分40秒
  > Modified Time:2022年10月14日 星期五 14时59分40秒
 *******************************************************/

#include <iostream>

using namespace std;
int main(){
	char ch = 'M';
	int i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;

	cout << "Add one to the character code:" << endl;
	ch = ch + 1;
	i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;
	cout << "Displaying char ch using cout.put(ch):";
	cout.put(ch);

	cout.put('1');
	cout << endl << "Done" << endl;
	return 0;
}
