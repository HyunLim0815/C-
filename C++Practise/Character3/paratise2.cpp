/***********************************************************
  > File Name: paratise2.cpp
  > Author: admin
  > Mail: -----------------
  > Created Time: 2022年10月14日 星期五 15时36分05秒
  > Modified Time:2022年10月14日 星期五 15时36分05秒
 *******************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int inch,foot,hight_foot;
	double hight, pound, weight_pound, weight;
	double bmi;
	const int to_foot = 12;
	const double to_meter = 0.0254;
	const double to_kg = 2.2;

	cout << "Please enter your hight in Inch and Foot.";
	cin >> inch >> foot;
	hight_foot = inch * to_foot + foot;
	hight = hight_foot * to_meter;
	cout << "Your height in meter is " << hight << endl;

	cout << "Please enter your weight in Pound:";
	cin >> weight_pound;
	weight = weight_pound / to_kg;
	cout << "Your weight in kg is " << weight << endl;
	

	bmi = weight / (hight*hight);
	cout << "Your BMI is " << bmi << endl;

	return 0;


}

