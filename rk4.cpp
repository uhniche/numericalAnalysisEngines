#include <iostream>
#include <cmath>
#include "exampleDiffEqInput.h"

using namespace std;

int main() {
    double h; //step size
    double tNaught; //t condition
    double yNaught; //y condition
    double tFinal;
    double y;
    double t;
    double kOne;
    double kTwo;
    double kThree;
    double kFour;

    cout << "rk4 method approximation for y' = t - 2*t*y " << endl;
    cout <<"choose a step size"<< endl;
    cin >>h;
    cout <<"t condition"<< endl;
    cin >> tNaught;
    cout <<"y condition"<< endl;
    cin >> yNaught;
    cout <<"choose t end condition"<< endl;
    cin >> tFinal;
    t = tNaught;
    y = yNaught;
    cout << "y = " << y << endl;

    for (int i = 0; i < (tFinal-tNaught)/h; i++) {

        kOne = diffEq(t, y);
        kTwo = diffEq(t + 0.5*h, y + 0.5*h*kOne);
        kThree = diffEq(t + 0.5*h, y + 0.5*h*kTwo);
        kFour = diffEq(t + h, y + h*kThree);

        y = y + (1.0/6.0)*h*(kOne + 2*kTwo + 2*kThree + kFour);
        t = t + h;


        cout << "y = " << y << endl;
        cout << "% error = " << 100*abs(genSoln(t)-y)/genSoln(t) << endl;
    }

    return 0;
}

