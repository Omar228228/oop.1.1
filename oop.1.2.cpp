#include <iostream>
#include "FloatRange.h"
using namespace std;

FloatRange makeFloatRange(double x, double y)
{
    FloatRange fr;
    if (!fr.init(x, y))
        cout << "wrong argument" << endl;
    return fr;
}

int main()
{
    FloatRange fr1, fr2;

    cout << "FloatRange - 1" << endl;
    fr1.read();
    fr1.rangeСheck();

    cout << "FloatRange - 2" << endl;
    fr2.set_a(6);
    fr2.set_b(8);
    fr2.display();
    fr2.rangeСheck();

    double x, y;
    cout << "Input value:" << endl << endl;
    cout << " X = "; cin >> x;
    cout << " Y = "; cin >> y;
    fr2 = makeFloatRange(x, y);

}