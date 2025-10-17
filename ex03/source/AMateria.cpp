/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:21:29 by dario             #+#    #+#             */
/*   Updated: 2025/10/17 16:14:26 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const &type) : _type(type)
{}

AMateria::AMateria(const AMateria &copy)
{
	this->_type = copy.getType();
}

AMateria &AMateria::operator=(const AMateria &copy)
{
	if (this != &copy)
		this->_type = copy.getType();
	return (*this);
}

AMateria::~AMateria(void)
{}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

AMateria *AMateria::clone() const
{
	return NULL;
}

void AMateria::use(ICharacter &target)
{
	(void)target;
}
