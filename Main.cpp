#include <iostream>
#include <cmath>
#include "h.h"

using namespace std;

int main()
{
    dyh* r = new dyh();
    
    r->inter(0, 2);
    r->epsi(0.0001);
    
    double res = r->dihh();
    double res1 = r->newton(1);

    cout << "Dyhometria: "<< res << endl;
    cout << "Newton: " << res1;
    
    delete r;
    return 0;
}