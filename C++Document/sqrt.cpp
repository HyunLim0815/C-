# include <iostream>
# include <cmath>

int main(){
	using namespace std;

	double area;
	cout << "Enter the floor equivalent of square " << endl;
	cin >> area;
	double side;
	side = sqrt(area);
	cout << "That's the equivalent of a square " << side
		 << " feet to the side." << endl;
	cout << "How fascinating!" << endl;
	return 0;
}
