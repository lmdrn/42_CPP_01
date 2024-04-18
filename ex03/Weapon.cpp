/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:59:49 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/11 13:28:20 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type)
: _type(_type)
{
}

Weapon::~Weapon(void)
{
}

std::string 	Weapon::getType() const
{
	return (_type);
}

void 	Weapon::setType(std::string newType)
{
	_type = newType;	
}
