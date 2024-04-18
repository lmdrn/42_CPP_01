/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:16:36 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/11 13:42:23 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

//default constructor
HumanB::HumanB(std::string _name)
: _name(_name), _weapon(nullptr)
{
}

HumanB::~HumanB(void)
{
}

void	HumanB::attack(void) const
{
	if (_weapon)
		std::cout << this->_name << " attacks with their " << "\x1b[31m" << _weapon->getType() << "\x1b[0m" << std::endl;
	else
		std::cout << "\x1b[31m" << " has no weapon.... ruuuuuuuun!" << "\x1b[0m" << std::endl;
}

void 	HumanB::setWeapon(Weapon& newWeapon)
{
	_weapon = &newWeapon;
}
