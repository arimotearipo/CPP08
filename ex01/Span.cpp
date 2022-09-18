#include "Span.hpp"

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

int		Span::shortestSpan(void)
{
	std::sort(vec.begin(), vec.end());

	std::vector<int>::iterator cur;
	std::vector<int>::iterator next = cur + 1;
	int	lowest = std::numeric_limits<int>::max();
	int temp;
	for (cur = vec.begin(); next != vec.end(); cur++)
	{
		next = cur + 1;
		temp = *next - *cur;
		if (abs(temp) <= lowest)
			lowest = abs(temp);
	}
	return (lowest);
}

int		Span::longestSpan(void)
{
	std::sort(vec.begin(), vec.end());

	std::vector<int>::iterator cur;
	std::vector<int>::iterator next = cur + 1;
	int	highest = 0;
	int temp;
	for (cur = vec.begin(); next != vec.end(); cur++)
	{
		next = cur + 1;
		temp = *next - *cur;
		if (abs(temp) >= highest)
			highest = abs(temp);
	}
	return (highest);
}

void	Span::printContainer(void)
{
	for (std::vector<int>::iterator i = vec.begin(); i != vec.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;
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