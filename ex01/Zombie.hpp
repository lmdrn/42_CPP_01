/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:07:42 by lmedrano          #+#    #+#             */
/*   Updated: 2024/02/12 18:56:25 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

#include <string>
#include <iostream>

class	Zombie
{
	private:
		std::string	_name;
	public:
		//constructor
		Zombie();
		//destructor
		~Zombie();
		//getters
		void	announce(void) const;
		//setters
		void	setName(std::string input);
};

#endif
