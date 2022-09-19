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
	private:
		Span(void);			// just putting the default constructor here because the Span class shouldn't be declared without parameter
		unsigned int		max_size;
		std::vector<int>	vec;

	public:
		Span(unsigned int n);
		Span(Span const &tocopy);
		Span &operator=(Span const &toassign);
		~Span(void);

		std::vector<int> 	getVec(void) const;
		unsigned int		length(void) const;
		void				addNumber(int num);
		void				addNumberRandom(int lower, int upper);
		void				addNumberRange(int lower, int upper);
		long				shortestSpan();
		long				longestSpan();
		void				printContainer(void);
		void				printSorted(void);

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
};


#endif