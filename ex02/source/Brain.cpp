#include "../include/Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain copy constructor" << std::endl;
	for (size_t i = 0; i < 100; ++i)
	{
		this->ideas[i] = copy.ideas[i];
	}
}

Brain Brain::operator=(const Brain &copy)
{
	std::cout << "Brain equal operator" << std::endl;
	if (this != &copy)
	{
		for (size_t i = 0; i < 100; ++i)
		{
			this->ideas[i] = copy.ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor" << std::endl;
}

void Brain::generateIdeas(void)
{
	for (size_t i = 0; i < this->ideas->length(); i++)
	{
		if (i % 2 == 0)
			this->ideas[i] = "buena idea";
		else
			this->ideas[i] = "mala idea";
	}
}
