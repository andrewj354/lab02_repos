// Lab_03_3.cpp
// Варіант 23

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double PI = 3.14159265358979323846;   // число пі

    double x;   
    double R;   
    double y;   

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    if (x <= -7 - R)
        y = R;                   // горизонтальна пряма
    else
        if (-7 - R < x && x <= -7 + R)
            // нижня дуга кола з центром (-7; R)
            y = R - sqrt(R * R - (x + 7) * (x + 7));
        else
            if (-7 + R < x && x <= -4)
                y = R;           // горизонтальна пряма
            else
                if (-4 < x && x <= 0)
                    // пряма через (-4; R) і (0; 0): y = -R*x/4
                    y = R * (0 - x) / 4;
                else
                    if (0 < x && x <= PI)
                        y = sin(x);        // дуга синусоїди
                    else
                        y = x - PI;        // пряма під кутом 45°

    cout << endl;
    cout << "y = " << y << endl;

    cin.get();
    cin.get();
    return 0;
}
