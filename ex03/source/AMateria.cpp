/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:21:29 by dario             #+#    #+#             */
/*   Updated: 2025/10/17 04:55:53 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const &type) : _type(type)
{}

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
