#include "Span.hpp"
#include "colours.h"


Span::Span(void){}

Span::Span(unsigned int n) : max_size(n) {}

Span::Span(Span const &tocopy)
{
	*this = tocopy;
}

Span &Span::operator=(Span const &toassign)
{
	if (this != &toassign)
		*this = toassign;
	return (*this);
}

Span::~Span(void) {}

int &Span::operator[](unsigned int i)
{
	if (i >= this->max_size)
		throw BadIndexException();
	return (this->vec[i]);
}

unsigned int	Span::length(void) const
{
	return (this->max_size);
}

void	Span::addNumber(int num)
{
	if (this->vec.size() >= this->max_size)
		throw ExceedLimitException();
	this->vec.push_back(num);
}

long		Span::longestSpan(void)
{
	if (vec.size() < 2)
		throw NoSpanException();
	std::vector<int> temp_vec = vec;
	std::sort(temp_vec.begin(), temp_vec.end());
	std::vector<int>::iterator first;
	std::vector<int>::iterator last;
	long	longest;
	first = temp_vec.begin();
	last = temp_vec.end() - 1;
	long l_first = static_cast<long>(*first);
	long l_last = static_cast<long>(*last);
	longest = abs(l_last - l_first);
	return (longest);
}

long		Span::shortestSpan(void)
{
	if (vec.size() < 2)
		throw NoSpanException();
	std::vector<int> temp_vec = vec;
	std::sort(temp_vec.begin(), temp_vec.end());
	long 	max = 2147483647;
	long	min = -2147483648;
	long	shortest = max - min;
	std::vector<int>::iterator cur = temp_vec.begin();
	std::vector<int>::iterator next = cur + 1;
	while (next != temp_vec.end())
	{
		if (abs(static_cast<long>(abs(*next - *cur))) <= shortest)
			shortest = abs(*next - *cur);
		cur++;
		next = cur + 1;
	}
	return (shortest);
}

void	Span::printContainer(void)
{
	for (std::vector<int>::iterator i = vec.begin(); i != vec.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;
}

void	Span::printSorted(void)
{
	std::vector<int> temp_vec = vec;
	std::sort(temp_vec.begin(), temp_vec.end());
	for (std::vector<int>::iterator i = temp_vec.begin(); i != temp_vec.end(); i++)
		std::cout << *i << " ";
	std::cout << std:: endl;
}

const char *Span::NoSpanException::what() const throw()
{
	return ("No span can be found due to not enough values");
}

const char *Span::ExceedLimitException::what() const throw()
{
	return ("Exceeded the maximum limit");
}

const char *Span::BadIndexException::what() const throw()
{
	return ("Exceed range of index");
}