#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << BYEL "1 " RESET;
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << BYEL "2 " RESET;
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737); // at this point the content of the stack is {5, 3 , 5, 737} from bottom to top
	//[...]
	mstack.push(0); // now {5, 3 , 5, 737, 0} bottom to top
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return(0);
}