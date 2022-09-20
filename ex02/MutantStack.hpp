#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void);
		MutantStack(MutantStack const &tocopy);
		MutantStack &operator=(MutantStack const &toassign);
		~MutantStack(void);
};

#endif