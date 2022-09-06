#include "calculus.h"

// [Max/Min of a quadratic equation - C++ Forum](https://cplusplus.com/forum/beginner/93437/)
quadratic::quadratic(double A, double B, double C) : a(A), b(B), c(C){};
double quadratic::fx(double x) { return a * x * x + b * x + c; }
double quadratic::maxminX() { return -b / (2.0 * a); }
double quadratic::maxmin() { return fx(maxminX()); }