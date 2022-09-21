#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include "colours.h"

using std::cout;
using std::endl;

template<typename T>
class MutantStack : public std::stack<T>
{
	private:

	public:
		MutantStack(void);
		MutantStack(MutantStack const &tocopy);
		MutantStack &operator=(MutantStack const &toassign);
		virtual ~MutantStack(void);

		typedef typename std::stack<T>::container_type			container_type;

		typedef typename container_type::iterator				iterator;
		typedef typename container_type::const_iterator			const_iterator;
		typedef typename container_type::reverse_iterator 		reverse_iterator;
		typedef typename container_type::const_reverse_iterator const_reverse_iterator;

		iterator				begin(void)
		{
			return (this->c.begin());
		}

		iterator				end(void)
		{
			return (this->c.end());
		}

		const_iterator			begin(void) const
		{
			return (this->c.begin());
		}

		const_iterator			end(void) const
		{
			return (this->c.end());
		}

		reverse_iterator		rbegin(void)
		{
			return (this->c.rbegin());
		}

		reverse_iterator		rend(void)
		{
			return (this->c.rend());
		}

		const_reverse_iterator	rbegin(void) const
		{
			return (this->c.rbegin());
		}

		const_reverse_iterator	rend(void) const
		{
			return (this->c.rend());
		}
};

template<typename T>
MutantStack<T>::MutantStack(void)
{
	cout << BLU "[MUTANTSTACK CLASS CONSTRUCTED]" RESET << endl;	
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &tocopy)
{
	cout << BLU "[MUTANTSTACK CLASS CONSTRUCTED BY COPY" RESET << endl;
}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &toassign)
{
	cout << BLU "[MUTANTSTACK CLASS CONSTRUCTED BY ASSIGNMENT]" RESET << endl;
}

template<typename T>
MutantStack<T>::~MutantStack<T>(void)
{
	cout << RED "[MUTANTSTACK CLASS DECONSTRUCTED]" RESET << endl;
}

#endif