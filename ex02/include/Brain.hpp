#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(const Brain &copy);
		Brain operator=(const Brain &copy);

		~Brain(void);

		void	generateIdeas(void);

	protected:
		std::string	ideas[100];
};

#endif