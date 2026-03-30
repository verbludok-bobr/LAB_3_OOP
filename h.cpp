#include <cmath>
#include "h.h"
#include <iostream>

using namespace std;

dyh::dyh()
{
    a = 0;
    b = 0;
    eps = 0.001;
}

dyh::~dyh()
{
}

double dyh::f(double x)
{
    return 3 * sin(sqrt(x)) + 0.35 * x - 3.8;
}

double dyh::f1(double x)
{
    return 3 * sin(sqrt(x)) + 0.6 * x - 3.8;
}

double dyh::df(double x)
{
    return (f(x + eps) - f(x)) / eps;
}

void dyh::inter(double a1, double b1)
{
    a = a1;
    b = b1;
}

void dyh::epsi(double eps1)
{
    eps = eps1;
}

double dyh::dihh()
{
    double l = a;
    double r = b;

    if(f(l) * f(r) > 0)
    {
        cout << "Nema rozvyazku na promizku"<< endl;
        return 0;
    }

    double c;

    while(abs((r - l)) > eps)
    {
        c = (l + r) / 2;
        
        if((f(l) * f(c)) < 0)
        {
            r = c;
        }
        else 
        {
            l = c;
        }
    }
    double x = (l + r) / 2 ;
    return x;
}

double dyh::newton(double poch)
{
    double x = poch;

    while (true)
    {
        double d = df(x);
        if(d == 0)
        {
            cout<< "pohidna = 0"<< endl;
            return 0;
        }

        double x1 = x - f(x)/d;

        if(fabs(x1 - x) < eps)
        {
            return x1;
        }
        x = x1;
    }
}
/*
double f(double x)
{
    return 3 * sin(sqrt(x)) + 0.35 * x - 3.8;
}
*/