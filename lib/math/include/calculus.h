#ifndef _CALCULUS_H_
#define _CALCULUS_H_

class quadratic {
    double a, b, c;
public:
    quadratic(double A, double B, double C);
    double fx(double x);
    double maxminX();
    double maxmin();
};

#endif