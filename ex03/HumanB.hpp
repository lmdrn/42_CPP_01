/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:03:26 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/11 13:42:24 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class 	HumanB
{
	private:
		std::string _name;
		Weapon* _weapon;
	public:
		HumanB(std::string _name);
		~HumanB();
		void 	attack(void) const;
		void 	setWeapon(Weapon& newWeapon);
};

#endif
