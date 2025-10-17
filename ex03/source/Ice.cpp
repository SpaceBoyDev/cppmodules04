/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:18:18 by dario             #+#    #+#             */
/*   Updated: 2025/10/17 02:35:22 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice() : AMateria("ice")
{}

Ice::Ice(const Ice &copy) : AMateria("ice")
{
	this->type = copy.getType();
}

Ice &Ice::operator=(const Ice &copy)
{
	if (this != &copy)
	{
		this->type = copy.getType();
	}
	return (*this);
}

Ice::~Ice() {}

AMateria *Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter &target) const
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
