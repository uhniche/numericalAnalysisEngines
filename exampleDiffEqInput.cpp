#include <cmath>
#include "exampleDiffEqInput.h"

double diffEq(double t, double y) {
    return t - 2*t*y;
}

double genSoln(double t) {
    return 0.5 - 1.5*exp(-pow(t,2));
}
