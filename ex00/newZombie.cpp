/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:19:08 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/18 14:16:54 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie*		walker;

	walker = NULL;
	walker = new Zombie;
	walker->setName(name);	
	return (walker);
}

void	randomChump(std::string name)
{
	Zombie	*chump;
	if (!name.empty())
	{
		chump = new Zombie;
		chump->setName(name);
		chump->announce();
	}
}
