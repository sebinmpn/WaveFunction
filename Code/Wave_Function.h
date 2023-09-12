#pragma once

#include <math.h>
#include <numbers>

#include "Wave.h"

namespace wave_function
{
    using std::numbers::pi;

    //static constexpr double h = 6.62607015e-34 / (2 * pi);
    double h = 1;
    double L = 1;
    double m = 1;
    double x;
    double t;
    int n = 1;


    Wave psi(double x, double t)
    {
        double pihmlt = pi * h * t / (m * L);

        double c = cos(2 * (2 * n + 1) * (pi / L) *
            (x - (2 * n + 1) * pihmlt));
        double s = sin(2 * n * (pi / L) *
            (x - n * pihmlt));

        double nom_const = 1 / sqrt(2 * L);

        c = (c + 1) * nom_const;
        s = s * nom_const;

        return Wave{ c, s , x, t};
    }
}