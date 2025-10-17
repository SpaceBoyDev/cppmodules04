/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 20:00:48 by dario             #+#    #+#             */
/*   Updated: 2025/10/17 02:31:06 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>
#include <ICharacter.hpp>

class AMateria
{
	protected:
		std::string	type;
	public:
		AMateria(std::string const &type);
		virtual ~AMateria(void);

		std::string const &getType() const; //Returns the materia type
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif