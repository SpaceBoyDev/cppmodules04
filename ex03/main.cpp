/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 20:00:08 by dario             #+#    #+#             */
/*   Updated: 2025/10/15 20:24:40 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ICharacter.hpp"
#include "include/IMateriaSource.hpp"
#include "include/Character.hpp"
#include "include/MateriaSource.hpp"
#include "include/AMateria.hpp"
#include "include/Cure.hpp"
#include "include/Ice.hpp"

int	main(void)
{

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	
	return 0;
}

/*
Expected output:
	$> clang++ -W -Wall -Werror *.cpp
	$> ./a.out | cat -e
	* shoots an ice bolt at bob *$
	* heals bob's wounds *$

*/