/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:21:29 by dario             #+#    #+#             */
/*   Updated: 2025/10/17 02:19:49 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"
#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
}

std::string const &AMateria::getType() const
{
	return (this->type);
}

AMateria *AMateria::clone() const
{
	return nullptr;
}

void AMateria::use(ICharacter &target)
{
}
