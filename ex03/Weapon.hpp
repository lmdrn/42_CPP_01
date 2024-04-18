/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:45:38 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/11 10:59:55 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class 	Weapon
{
	private:
		std::string 	_type;

	public:
		Weapon(std::string _type);
		~Weapon();
		std::string 	getType(void) const;
		void 		setType(std::string _newType);
};

#endif
