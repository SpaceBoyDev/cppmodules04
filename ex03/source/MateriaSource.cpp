/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:18:34 by dario             #+#    #+#             */
/*   Updated: 2025/10/17 16:45:46 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
	{
		this->_templates[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	for (size_t i = 0; i < 4 ; i++)
	{
		if (copy._templates[i])
			this->_templates[i] = copy._templates[i]->clone();
		else
			this->_templates[i] = NULL;
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
	if (this != &copy)
	{
		for (size_t i = 0; i < 4 ; i++)
		{
			if (this->_templates[i])
				delete this->_templates[i];
			if (copy._templates[i])
				this->_templates[i] = copy._templates[i]->clone();
			else
				this->_templates[i] = NULL;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_templates[i])
			delete this->_templates[i];
	}
	
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (!this->_templates[i])
		{
			this->_templates[i] = m;
			return ;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_templates[i] && this->_templates[i]->getType() == type)
			return (_templates[i]->clone());
	}
	return (NULL);
}
