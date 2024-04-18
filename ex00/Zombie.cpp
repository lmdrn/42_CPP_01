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

Zombie::Zombie(void)
{
}

Zombie::~Zombie(void)
{
	std::cout << "\x1b[31m" << this->_name << " died.....✞" << "\x1b[0m" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << "\x1b[32m" << this->_name << " BraiiiiiiinnnzzzZ..." << "\x1b[0m" << std::endl;
}

void	Zombie::setName(std::string input)
{
	this->_name = input;	
}
