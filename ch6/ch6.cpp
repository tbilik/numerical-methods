#include "ch6.h"

int bisectionMethod(double &a, double &b, double theta, int f)
{
    int i = 0;
    double c;
    // bisection can't be applied to an improper interval,
    // non-positive theta or if f(a) and f(b) have the same sign
    if (a > b || theta <= 0.0 || succ(f, a) * succ(f, b) > 0)
        return -1;
    // while precision has not been reached
    while (b - a < theta)
    {
        // compute midpoint of interval
        c = 0.5 * (a + b);
        // use IVT to find whether root is in [a,c] or [c,b]
        if (succ(f, a) * succ(f, c) < 0)
            b = c;
        else
            a = c;
        i++;
    }
    return i; // return iterations
}

double succ(int f, double x)
{
    switch (f)
    {
    case 0:
        return pow(x, 3) - 2 * pow(x, 2) - 5 * x + 6;
        break;
    case 1:
        return (x - 1) * (x + 2) * (x - 3);
        break;
    case 2:
        return 0.3 + cos(x);
        break;
    }
}
