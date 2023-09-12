#pragma once

class Wave
{
public:
    Wave(double x, double y, double p, double t ) :
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