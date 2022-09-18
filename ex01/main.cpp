#include "Span.hpp"
#include <cstdlib>
#include <iostream>

using std::cout;
using std::endl;

int	main(void)
{
	srand(time(NULL));
	Span sp(20);
	for (unsigned int i = 0; i < sp.length(); i++)
	{
		sp.addNumber(rand() % 20);
	}
	sp.printContainer();
	cout << "shortest: " << sp.shortestSpan() << endl;
	sp.printContainer();
	cout << "longest: " << sp.longestSpan() << endl;
	sp.printContainer();
	return (0);
}