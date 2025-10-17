/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:17:47 by dario             #+#    #+#             */
/*   Updated: 2025/10/17 03:38:13 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character() : _name("default_name")
{}
Character::Character(const std::string &name) : _name(name)
{}
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
			this->_inventory[i] = copy._inventory[i];
	}
	return (*this);
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
	if (this->_inventory[idx])
		this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
}
