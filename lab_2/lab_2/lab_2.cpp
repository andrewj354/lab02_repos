#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double alpha; 
    double z1;    
    double z2;    

    cout << "alpha = "; cin >> alpha;

    z1 = (sin(2 * alpha) + sin(5 * alpha) - sin(3 * alpha))
        / (cos(alpha) + 1 - 2 * pow(sin(2 * alpha), 2));
    z2 = 2 * sin(alpha);

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get(); cin.get(); 
    return 0;
}