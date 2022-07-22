#include "ch6.h"

int bisectionMethod(double &a, double &b, double theta, Fn f)
{
    int i = 0;
    double c;
    // bisection can't be applied to an improper interval,
    // non-positive theta or if f(a) and f(b) have the same sign
    if (a > b || theta <= 0.0 || func(f, a) * func(f, b) > 0)
        return -1;
    // while precision has not been reached
    while (b - a < theta)
    {
        // compute midpoint of interval
        c = 0.5 * (a + b);
        // use IVT to find whether root is in [a,c] or [c,b]
        if (func(f, a) * func(f, c) < 0)
            b = c;
        else
            a = c;
        i++;
    }
    return i; // return iterations
}

double func(Fn f, double x)
{
    switch (f)
    {
    case a:
        return expt(x, 3) - 2 * expt(x, 2) - 5 * x + 6;
        break;
    case b:
        return (x - 1) * (x + 2) * (x - 3);
        break;
    case c:
        return 0.3 + cos(x);
    }
}
