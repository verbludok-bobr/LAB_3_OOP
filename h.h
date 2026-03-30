#ifndef h_h
#define h_h
class dyh
{
    private:
        double a, b, eps;
        double f(double x);
        double df(double x);

    public:
        dyh();
        ~dyh();


        double f1(double x);
        void inter(double a1, double b1);
        void epsi(double eps1);

        double dihh();
        double newton(double poch);
};

double f(double x);
#endif