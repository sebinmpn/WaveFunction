#ifndef wave_function_h
#define wave_function_h

#include <math.h>

//***********************************************************************//
//***********************************************************************//

class Psi
{
public:
    Psi(double x, double y, double p, double t ) :
        _x(x),
        _y(y),
        _p(p),
        _t(t)
    {}
public:
    void x(double v) { _x = v; }
    void y(double v) { _y = v; }
    void p(double v) { _p = v; }
    void t(double v) { _t = v; }
    double x() { return _x; }
    double y() { return _y; }
    double p() { return _p; }
    double t() { return _t; }

private:
    double _x;
    double _y;
    double _p;
    double _t;
};

//***********************************************************************//
//***********************************************************************//
class Well
{
public:
    void h(double v) { _n = v; }
    void m(double v) { _m = v; }
    void n(double v) { _n = v; }
    void L(double v) { _L = v; }

private:
    double _pi = M_1_PI;
    double _h = 1;
    double _m = 1;
    int    _n = 1;
    double _L = 1;
    double _x;
    double _t;


//***********************************************************************//
//***********************************************************************//
public:
    Psi psi (double x, double t)
    {
        double pihmlt = _pi * _h * _t / (_m * _L);

        double c = cos(2 * (2 * _n + 1) * (_pi / _L) *
            (x - (2 * _n + 1) * pihmlt));
        double s = sin(2 * _n * (_pi / _L) *
            (x - _n * pihmlt));

        double nom_const = 1 / sqrt(2 * _L);

        c = (c + 1) * nom_const;
        s = s * nom_const;

        return Psi { c, s , x, t};
    }
};

#endif
