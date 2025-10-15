#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	public:
		Dog(void);
		Dog(const Dog &copy);
		Dog operator=(const Dog &copy);

		~Dog(void);

		void	makeSound() const;

	private:
		Brain	*brain;
};

#endif