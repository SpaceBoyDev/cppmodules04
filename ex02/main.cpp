/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darmarti <darmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 22:57:17 by dario             #+#    #+#             */
/*   Updated: 2026/02/04 15:41:11 by darmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Cat.hpp"
#include "include/Dog.hpp"
#include "include/WrongCat.hpp"

int main()
{
	std::cout << "======NORMAL ANIMALS======" << std::endl;

	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();

	delete j;
	delete i;

	{
		std::cout << std::endl << "======LOTS OF ANIMALS======" << std::endl;
		const int size = 5;
		AAnimal *animals[size];

		for (size_t i = 0; i < size; i++)
		{
			if (i % 2 == 2)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
			animals[i]->makeSound();
		}

		for (size_t i = 0; i < size; i++)
			delete animals[i];
	}

	{
		Cat	*gatico = new Cat();
		Cat	*otroGatico = new Cat();

		gatico->makeSound();
		*gatico = *otroGatico;
		delete otroGatico;
		delete gatico;
	}

	return 0;
}