/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 20:00:08 by dario             #+#    #+#             */
/*   Updated: 2025/10/17 16:49:11 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Character.hpp"
#include "include/MateriaSource.hpp"
#include "include/Cure.hpp"
#include "include/Ice.hpp"

int	main(void)
{
    std::cout << "=== DEFAULT SUBJECT TESTS ===" << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(1, *bob);
	me->unequip(1);
	me->use(7, *bob);
	me->unequip(8);
    
    std::cout << "=== COPY AND ASSIGNMENT TESTS ===" << std::endl;

    Character *copyChar = new Character(*static_cast<Character*>(me));
    Character *assignChar = new Character("assign");
    *assignChar = *static_cast<Character*>(me);

    std::cout << "Using copies on bob:" << std::endl;
    copyChar->use(0, *bob);
    copyChar->use(1, *bob);
    assignChar->use(0, *bob);

    std::cout << "Deleting original 'me' now to test deep copy safety..." << std::endl;
    delete me;
    me = NULL;

    std::cout << "Copies still work after deleting original:" << std::endl;
    copyChar->use(0, *bob);
    assignChar->use(1, *bob);

    std::cout << "=== MATERIASOURCE TESTS ===" << std::endl;

    MateriaSource *src2 = new MateriaSource(*static_cast<MateriaSource*>(src));
    AMateria *t2 = src2->createMateria("ice");
    if (t2)
    {
        std::cout << "src2 created materia: " << t2->getType() << "\n";
        delete t2;
    }
    else
        std::cout << "src2 createMateria returned NULL\n";
    delete src2;

    delete copyChar;
    delete assignChar;
    delete bob;
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