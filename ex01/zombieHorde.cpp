/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:07:23 by lmedrano          #+#    #+#             */
/*   Updated: 2024/02/12 19:03:59 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie 	*zombieHorde(int N, std::string name)
{
	int 	i;
	//single allocation
	Zombie *zombies = new Zombie[N];

	i = 0;
	while (i < N)
	{
		zombies[i].setName(name);
		i++;
	}

	return (zombies);
}
