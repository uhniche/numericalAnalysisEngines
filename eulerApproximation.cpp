#include <iostream>
#include <cmath>
using namespace std;

double diffEq(double t, double y) {
    return t - 2*t*y;
}
double genSoln(double t) {
    return 0.5- 1.5*exp(-pow(t,2));
}

int main() {
    double h; //step size
    double tNaught; //t condition
    double yNaught; //y condition
    double tFinal;
    double y;
    double t;
    double yPrime;
    cout << "euler's method approximation for y' = t - 2*t*y " << endl;
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
        yPrime = diffEq(t,y);
        y = y + yPrime*h;
        t=t+h;
        cout << "y = " << y << endl;
        cout << "% error = " << 100*abs(genSoln(t)-y)/genSoln(t) << endl;
    }

    return 0;
}

