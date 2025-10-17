/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:18:34 by dario             #+#    #+#             */
/*   Updated: 2025/10/17 03:45:02 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
	// TODO: insert return statement here
}

MateriaSource::~MateriaSource() {}

void MateriaSource::learnMateria(AMateria *m)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (!this->_templates[i])
		{
			this->_templates[i] = m; 
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	return NULL;
}
