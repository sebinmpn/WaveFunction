#pragma once

#include <vector>

#include "Wave_Function.h"
#include "Wave.h"

std::vector<Wave> simulate(double no_of_point, double x1, double x2)
{
	double delta_x = (x2 - x1) / no_of_point;
	std::vector<Wave> wave;

	for (double i = x1; i <= x2; i += delta_x)
	{
		wave.push_back (wave_function::psi (i, 0));
	}
	return wave;
}

