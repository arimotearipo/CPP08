#include "Span.hpp"
#include "colours.h"
#include <cstdlib>
#include <iostream>

using std::cerr;
using std::cout;
using std::endl;

int	main(void)
{
	srand(time(NULL));
	Span sp(20000);
	for (unsigned int i = 0; i < sp.length(); i++)
	{
		sp.addNumber(rand() % 20000);
	}
	cout << UWHT "Printing the content of the container..." RESET << endl;
	sp.printContainer();
	cout << endl;
	cout << UWHT "Printing the sorted content of the container..." RESET << endl;
	sp.printSorted();
	cout << endl;

	cout << UWHT "Trying to find longest span..." RESET << endl;
	try
	{
		cout << "longest: " << sp.longestSpan() << endl;
	}
	catch (std::exception const &e)
	{
		cerr << RED "Caught an error: " << e.what() << RESET << endl;
	}
	cout << endl;

	cout << UWHT "Trying to find the shortest span..." RESET << endl;
	try
	{
		cout << "shortest: " << sp.shortestSpan() << endl;
	}
	catch (std::exception const &e)
	{
		cerr << RED "Caught an error: " << e.what() << RESET << endl;
	}
	return (0);
}

// 1 5 9 2