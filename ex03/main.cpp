/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dario <dario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 22:57:17 by dario             #+#    #+#             */
/*   Updated: 2025/09/04 18:22:31 by dario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.hpp"
#include "Fixed.hpp"
#include "Point.hpp"

// Check with https://planetcalc.com/8108/

int main(void)
{
	Point a(7, 7);
	Point b(11, 1);
	Point c(2, 2);

	Point point(7, 6.9f);

	std::cout << a.getX() << " " << a.getY() << std::endl;

	if (bsp(a, b, c, point))
		std::cout << "Dentro\n" << std::endl;
	else
		std::cout << "Fuera\n" << std::endl;

	return (0);
}
