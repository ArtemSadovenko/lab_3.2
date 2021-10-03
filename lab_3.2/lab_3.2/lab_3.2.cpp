#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a;
	double b;
	double x;
	double c;
	double y;
	double y1;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;
	
	if (x < 0 && b != 0) {
		y = (a * x * x) - (b * x * x);
	}
	else if (x > 0 && b == 0) {
		y = (x - a) / (x - c);
	}
	else {
		y = (x + 5) / (c * (x - 10));
	}

	if (x < 0 && b != 0) {
		y1 = (a * x * x) - (b * x * x);
	}
	if (x > 0 && b == 0) {
		y1 = (x - a) / (x - c);
	}
	if ((x > 0 && b != 0) || (x < 0 && b == 0)) {
		y1 = (x + 5) / (c * (x - 10));
	}



	cout << "F = " << y << endl;
	cout << "F = " << y1;

	return 0;
}


