/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:18:02 by dario             #+#    #+#             */
/*   Updated: 2025/10/17 04:16:58 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure() : AMateria("cure")
{}

Cure::Cure(const Cure &copy) : AMateria("cure")
{
	this->_type = copy.getType();
}

Cure &Cure::operator=(const Cure &copy)
{
	if (this != &copy)
	{
		this->_type = copy.getType();
	}
	return (*this);
}

Cure::~Cure() {}

AMateria *Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter &target) const
{
	std::cout << "* heals" << target.getName() << "’s wounds *" << std::endl;
}
