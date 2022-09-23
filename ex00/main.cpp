#include "easyfind.hpp"
#include "colours.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>

using std::cout;
using std::endl;
using std::cerr;

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		cout << "./easyfind [array size] [range of values] [value to find]" << endl;
		cout << YEL << "TIP: The lower the ratio of range of values per array size, the higher the chance to find the value" RESET << endl;
		return (1);
	}

	unsigned as = atoi(av[1]); // (array size) array size to be created
	int	avr = atoi(av[2]); // range of values to be filled into the array (the smaller the range per array size, the higher the chance to find the value)
	int	tf = atoi(av[3]); // (to find) the value you want to find in the array

	// int as2 = 100;
	cout << UWHT "Instantiating an array<int> type..." RESET << endl;
	std::vector<int> int_vec;
	cout << endl;

	cout << UWHT "Filling in the vector with random values..." RESET << endl;
	srand(time(NULL));
	for (unsigned i = 0; i < as; i++)
	{
		int num = rand() % avr;
		int_vec.push_back(num);
	}
	for (unsigned i = 0; i < int_vec.size(); i++)
		cout << std::setw(4) << int_vec[i];
	// Below is the code for c++11 to print
	// for (int value : int_vec)
	// 	cout << value << endl;
	cout << endl << endl;

	cout << UWHT "Trying to find " << tf << " in the int vector..." RESET << endl;
	try
	{
		int n = easyfind(int_vec, tf);
		cout << GRN << "Found value: " << n << RESET << endl;
	}
	catch (std::exception const &e)
	{
		cout << RED << "ERROR: " << e.what() << RESET << endl;
	}
	cout << endl;

	cout << UWHT "Ending programme..." RESET << endl;
	return (0);
}