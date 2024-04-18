/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:07:23 by lmedrano          #+#    #+#             */
/*   Updated: 2024/02/12 19:03:59 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int	main(void)
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "|  Creating Zombie Horde  |" << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << "                          " << std::endl;
	Zombie 		*horde = zombieHorde(10, "Walker");
	for (int i = 0; i < 10; i++)
	{
		horde[i].announce();
	}
	std::cout << "                          " << std::endl;

	//to avoid memory leaks
	delete[] horde;
	return (0);
}
