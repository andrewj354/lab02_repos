// Лабораторна робота № 3.1
// Варіант 23

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;   
    double y;   
    double A;   
    double B;   

    cout << "x = "; cin >> x;

    A = x * x + sin(4 * x / 3);

    // спосіб 1
    if (x < -5)
        B = 1 / tan(x);                  
    if (-5 <= x && x <= 0)
        B = 4 - x * x / 2;
    if (x > 0)
        B = log10(x * x) - 4 * x / 3;        

    y = A + B;

    cout << endl;
    cout << "1) y = " << y << endl;

    // спосіб 2:
    if (x < -5)
        B = 1 / tan(x);
    else
        if (x > 0)
            B = log10(x * x) - 4 * x / 3;
        else
            B = 4 - x * x / 2;

    y = A + B;

    cout << "2) y = " << y << endl;

    cin.get();
    cin.get();
    return 0;
}
