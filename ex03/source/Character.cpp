/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:17:47 by dario             #+#    #+#             */
/*   Updated: 2025/10/17 16:16:24 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character() : _name("default_name")
{
	for (size_t i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	
}
Character::Character(const std::string &name) : _name(name)
{
	for (size_t i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}
Character::Character(const Character &copy)
{
	this->_name = copy.getName();
	for (size_t i = 0; i < 4 ; i++)
		this->_inventory[i] = copy._inventory[i];
}

Character &Character::operator=(const Character &copy)
{
	if (this != &copy)
	{
		this->_name = copy.getName();
		for (size_t i = 0; i < 4 ; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			this->_inventory[i] = copy._inventory[i];
		}
	}
	return (*this);
}

Character::~Character()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}
std::string const &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	if (!m)
		return ;
	for (size_t i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 4)
		return ;
	if (this->_inventory[idx])
		this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 4)
		return ;
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
}
