#pragma once

#include <vector>

#include "wave_function.h"


//***********************************************************************//


std::vector<Psi> simulate (double  h, double  m, double n, double L,
						   double x1, double x2, double no_of_point)
{
	Well _well;
	_well.h (h);
	_well.m (m);
	_well.n (n);
	_well.L (L);

	double delta_x = (x2 - x1) / no_of_point;
	std::vector<Psi> wave;

	for (double i = x1; i <= x2; i += delta_x)
	{
		wave.push_back (_well.psi (i, 0));
	}
	return wave;
}


//***********************************************************************//
