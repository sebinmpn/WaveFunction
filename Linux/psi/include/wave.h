#pragma once

#include <math.h>
#include <vector>

namespace wave_function
{

	class Wave
	{
	public:
		double x;
		double dx;
		double p;
	};


    //static constexpr double h = 6.62607015e-34 / (2 * pi);
    double h = 1;
    double L = 1;
    double m = 1;
    double x;
    double t;
    int n = 1;
	double V = 0;
	double E = 100;
	auto pi = M_1_PI;

	int no_of_points = 1000;
	double x1 = -1,x2 = 1;

	double delta_x = (x2 - x1) / no_of_points;


	std::vector<Wave> wave()
	{
		double _d_d_psi = 0;
		double   _d_psi = 1;
		double      psi = 0;

		std::vector<Wave> _wave;

		for(double i = x1; i < x2; i += delta_x)
		{
			_d_d_psi = (2 * m / (h * h)) *	 (V - E) * psi;
			  _d_psi = _d_psi + (_d_d_psi * delta_x);
				 psi = 	  psi + (  _d_psi * delta_x);
			_wave.push_back ( Wave {psi, _d_psi , i});
		}
		return _wave;
	}
}
