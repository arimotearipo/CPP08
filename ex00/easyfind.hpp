#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <algorithm>
#include <iostream>
#include <cstdlib>

class NotPresent : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("Value not present in container");
		}
};

// source: https://stackoverflow.com/questions/571394/how-to-find-out-if-an-item-is-present-in-a-stdvector
// definition for find: https://cplusplus.com/reference/algorithm/find/
// Using find_if would not work as the third parameter which is a function pointer only takes in the value pointed by the iterator as parameter

template<typename T>
int	easyfind(T con, int find)
{
	typename T::iterator ptr;

	ptr = std::find(con.begin(), con.end(), find);
	if (ptr == con.end()) 
	{
		throw NotPresent();
	}
	else
	{
		return (*ptr);
	}
}

#endif