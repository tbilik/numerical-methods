#include "ch5.h"

double REGoldenRatio (int n)
{
    // analytical solution to the golden ratio
    const double goldenRatio = (1 + sqrt(static_cast<double>(5))) / 2;
    double goldenRatioApprox;
    // this will compute fib sequence upto the n+1 number
    int a = 1, b = 1;
    while (n > 0)
    {
        swap(a, b);
        b = a + b;
        n--;
    }
    // compute the approximation of the golden ratio
    goldenRatioApprox = b / static_cast<double>(a);
    // return relative error
    return abs((goldenRatio - goldenRatioApprox) / goldenRatio);
}
