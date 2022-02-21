#include "FloatRange.h"

void FloatRange::set_a(double value)
{
	a = value;
}

void FloatRange::set_b(double value)
{
	b = value;
}
bool FloatRange::init(double x, double y)
{
	if (x < y)
	{
		a = x;
		b = y;
		return true;
	}
	else
		cout << "wrong argument" << endl;
		return false;
};

void FloatRange::display() const
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
};

void FloatRange::read()
{
	double x, y;

	do {
		cout << "a = ";
		cin >> x;
		cout << "b = ";
		cin >> y;
	} while (!init(x, y));

};

void FloatRange::range—heck()
{
	double c = 5;
		if (a < c && c < b) {
			cout << "c = " << c << " is in range." << endl;
		}
		else {
			cout << "c = " << c << " isn`t in range." << endl;
		}
};