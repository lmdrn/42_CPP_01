/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:19:08 by lmedrano          #+#    #+#             */
/*   Updated: 2024/02/12 18:44:15 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{}

Zombie::~Zombie(void)
{}

//announce oneself
void	Zombie::announce(void) const
{
	std::string name;

	name = this->_name;
	std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

//create a Zombie
//name the Zombie
//return it
Zombie* Zombie::newZombie(std::string name)
{
	Zombie*		walker;
	std::string	input;

	std::getline(std::cin, input);
	if (input.empty())
	{
		walker = new Zombie;
		walker->setName(input);	
	}
	return (walker);
}

void	Zombie::randomChump(std::string name)
{
	//create a Zombie
	// name it
	// announces itself
}
