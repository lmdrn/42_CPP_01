/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:37:16 by lmedrano          #+#    #+#             */
/*   Updated: 2024/02/12 18:49:09 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>


Zombie::Zombie(void)
{
	std::cout << "Previously on AMC... THE WALKING DEAD!" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << "died.....✞" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string input)
{
	this->_name = input;	
}
