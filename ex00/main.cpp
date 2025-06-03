#include "easyfind.hpp"

int	main(void)
{
	std::vector<int> vec;
	std::list<int> lst;
	std::deque<int> deq;
	for (int i = 0; i < 10; i++)
	{
		vec.push_back(i);
		lst.push_back(i);
		deq.push_back(i);
	}
	std::cout << "Testing with vector:" << std::endl;
	try
	{
		std::vector<int>::iterator it = easyfind(vec, 5);
		std::cout << "Found value: " << *it << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::vector<int>::iterator it = easyfind(vec, 42);
		std::cout << "Found value: " << *it << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\nTesting with list:" << std::endl;
	try
	{
		std::list<int>::iterator it = easyfind(lst, 7);
		std::cout << "Found value: " << *it << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\nTesting with deque:" << std::endl;
	try
	{
		std::deque<int>::iterator it = easyfind(deq, 9);
		std::cout << "Found value: " << *it << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
