#include <iostream>
#include "../include/wave.h"
#include <fstream>

int main()
{

	std::cout << "Wave function : "  << std::endl;

	auto wave = wave_function::wave();

	std::ofstream fout ("Wave.csv");
	for(auto point : wave)
	{
		fout << point.p << ", "
			 << point.x << ", "
			 << point.dx << '\n';
	}
	fout.close();

}
