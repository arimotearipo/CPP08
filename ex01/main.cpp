#include "Span.hpp"
#include "colours.h"
#include <cstdlib>
#include <iostream>

using std::cerr;
using std::cout;
using std::endl;

int	main(void)
{
	srand(time(NULL) + time(NULL));
	Span sp(10);
	for (unsigned int i = 0; i < sp.length(); i++)
	{
		sp.addNumber(rand() % 2147483647);
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

// int	main(void)
// {
// 	cout << BYEL "Testing assignment operator" RESET << endl;

// 	cout << UWHT "Declaring a Span sp1..." RESET << endl;
// 	Span sp1(10);
// 	cout << sp1.length() << endl;
// 	cout << endl;

// 	cout << UWHT "Filling sp1 with random values..." RESET << endl;
// 	sp1.addNumberRandom(-10000, 10000);
// 	cout << endl;

// 	cout << UWHT "Printing sp1..." RESET << endl;
// 	sp1.printContainer();
// 	cout << endl;

// 	cout << BYEL "Testing copy constructor" RESET << endl;
// 	cout << UWHT "Declaring a Span sp2 and copying sp1..." RESET << endl;
// 	Span sp2(sp1);
// 	cout << endl;

// 	cout << UWHT "Printing sp1 and sp2..." RESET << endl;
// 	cout << "sp1: "; sp1.printContainer();
// 	cout << "sp2: "; sp2.printContainer();
// 	cout << endl;

// 	cout << UWHT "Declaring a Span sp3 and assigning sp1..." RESET << endl;
// 	Span sp3 = sp1;
// 	cout << endl;

// 	cout << UWHT "Printing sp1 and sp3..." RESET << endl;
// 	cout << "sp1: "; sp1.printContainer();
// 	cout << "sp3: "; sp3.printContainer();
// 	cout << endl;

// 	cout << BYEL "Testing addNumber() range" RESET << endl;
// 	cout << UWHT "Declaring a Span sp4..." RESET << endl;
// 	Span sp4(10000);
// 	cout << endl;

// 	cout << UWHT "Trying to use addNumber()..." RESET << endl;
// 	// try
// 	// {
// 	// 	sp4.addNumber(100, 200);
// 	// }
// 	// catch(const std::exception& e)
// 	// {
// 	// 	std::cerr << e.what() << '\n';
// 	// }
// 	cout << endl;

// 	cout << UWHT "Printing the content of sp4..." RESET << endl;
// 	sp4.printContainer();
// 	cout << endl;

	
// }

// 1 5 9 2