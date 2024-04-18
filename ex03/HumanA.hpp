/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:07:20 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/11 10:49:15 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class 	HumanA
{
	private:
		std::string 	_name;
		Weapon& 	_weapon;
	public:
		HumanA(std::string _name, Weapon& _weapon);
		~HumanA();
		void 	attack(void) const;
};

#endif
