/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:39:55 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/12 11:15:50 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void 	Harl::debug()
{
	std::cout << "\x1b[036m" << "DEBUG: " << "\x1b[0m" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void 	Harl::info()
{
	std::cout << "\x1b[032m" << "INFO: " << "\x1b[0m" << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void 	Harl::warning()
{
	std::cout << "\x1b[38;5;208m" << "WARNING: " << "\x1b[0m" << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void 	Harl::error()
{
	std::cout << "\x1b[031m" << "ERROR: " << "\x1b[0m" << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void 	Harl::complain(std::string level)
{
	void 		(Harl::*complainFunctions[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string 	lvl[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int 		index = 0;

	for (int i = 0; i < 4; i++)
	{
		if (lvl[i] == level)
		{
			(this->*complainFunctions[i])();
			break ;
		}
		index++;
	}
	if (index == 4)
		std::cout << "\x1b[031m" << "ERROR: Level name is invalid" << "\x1b[30m" << std::endl;
}
