#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
	Cat(void);
	Cat(const Cat &copy);
	Cat &operator=(const Cat &copy);

	~Cat(void);

	void	makeSound() const;

	private:
	Brain	*brain;
};

#endif