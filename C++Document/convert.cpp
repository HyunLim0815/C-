/***********************************************************
  > File Name: convert.cpp
  > Author: admin
  > Mail: -----------------
  > Created Time: 2022年10月09日 星期日 21时39分23秒
  > Modified Time:2022年10月09日 星期日 21时39分23秒
 *******************************************************/

#include <iostream>

int stonetolb(int);

int main()
{
	using namespace std;
	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;
	int pounds = stonetolb(stone);
	cout << stone << " stone = ";
	cout << pounds << " pounds." << endl;
	return 0;
}

int stonetolb (int sts)
{
	return 14*sts ;
}

