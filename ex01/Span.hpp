#ifndef SPAN_HPP
#define SPAN_HPP

#include <ostream>
#include <vector>
#include <exception>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <limits>

using std::ostream;

class Span
{
	public:
		Span(unsigned int n);
		Span(Span const &tocopy);
		Span &operator=(Span const &toassign);
		~Span(void);

		unsigned int	length(void) const;
		void			addNumber(int num);
		long			shortestSpan();
		long			longestSpan();
		void			printContainer(void);
		void			printSorted(void);

		int &operator[](unsigned int i);
	
		class NoSpanException : public std::exception
		{
			virtual const char *what() const throw();
		};

		class ExceedLimitException : public std::exception
		{
			virtual const char *what() const throw();
		};

		class BadIndexException : public std::exception
		{
			virtual const char *what() const throw();
		};

	private:
		Span(void);			// just putting the default constructor here because the Span class shouldn't be declared without parameter
		unsigned int		max_size;
		std::vector<int>	vec;
};


#endif