/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darmarti <darmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 22:57:17 by dario             #+#    #+#             */
/*   Updated: 2026/02/04 15:36:07 by darmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Cat.hpp"
#include "include/Dog.hpp"
#include "include/WrongCat.hpp"

int main()
{
	std::cout << "======NORMAL ANIMALS======" << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl << "======FREEING NORMAL ANIMALS======" << std::endl;
	delete meta;
	delete j;
	delete i;

	std::cout << std::endl << "======WRONG ANIMALS======" << std::endl;
	const WrongAnimal *wrongMeta = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();

	std::cout << wrongCat->getType() << " " << std::endl;
	wrongCat->makeSound();
	wrongMeta->makeSound();

	std::cout << std::endl << "======FREEING WRONG ANIMALS======" << std::endl;
	delete wrongMeta;
	delete wrongCat;

	{
		std::cout << std::endl << "======LOTS OF ANIMALS======" << std::endl;
		const int size = 5;
		Animal *animals[size];

		for (size_t i = 0; i < size; i++)
		{
			if (i % 2 == 2)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
			animals[i]->makeSound();
		}
		
		std::cout << std::endl << "======FREEING LOTS OF ANIMALS======" << std::endl;
		for (size_t i = 0; i < size; i++)
			delete animals[i];
	}

	{
		std::cout << std::endl << "======TWO KITTIES======" << std::endl;
		Cat	*gatico = new Cat();
		Cat	*otroGatico = new Cat();

		gatico->makeSound();
		*gatico = *otroGatico;
		delete otroGatico;
		delete gatico;
	}

	return 0;
}