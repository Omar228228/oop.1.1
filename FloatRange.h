#include <iostream>
#pragma once
using namespace std;

class FloatRange
{
private:
	double  a, b;
public:
	double get_a() const { return a; };
	double get_b() const { return b; };
	void set_a(double value);
	void set_b(double value);

	bool init(double x, double y);
	void display() const;
	void read();

	void range—heck();
};