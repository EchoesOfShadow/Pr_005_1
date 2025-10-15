#include <iostream>
#include <iomanip>
#include "functions.h"
#include "Math.h"
using namespace std;

int main()
{
    double x, y;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    double d = (g (x*y, x*x, y*y) - g( 1, x ,y)) / (1 + g (sqrt(x), y * y, 1 ));

    cout << "d = " << d << endl;

    return 0;
}
