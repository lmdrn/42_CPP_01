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

void	randomChump(std::string name);
Zombie* newZombie(std::string name);

int	main(void)
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "| Creating Random Chumps |" << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << "                          " << std::endl;
	// stack allocation
	// zombie obj is only needed within the scope of a function
	// you do not need to explicitly delete objects allocated on the stack.
	// Stack allocation is managed automatically by the compiler.
	randomChump("Pierre Henri");
	randomChump("Jean Edouard");
	randomChump("Michel");
	std::cout << "                          " << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << "|     Creating Zombie    |" << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << "                          " << std::endl;
	//heap allocation
	//zombie object needs to be returned froma fucntion
	//to be used OUTSIDE of function scope
	Zombie	*walker1 = newZombie("Zborg");
	Zombie *walker2 = newZombie("Bwarg");
	Zombie *walker3 = newZombie("Eeeaaah");
	walker1->announce();
	walker2->announce();
	walker3->announce();
	std::cout << "                          " << std::endl;
	delete walker1;
	delete walker2;
	delete walker3;
	std::cout << "                          " << std::endl;

	return (0);
}
