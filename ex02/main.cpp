/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:07:23 by lmedrano          #+#    #+#             */
/*   Updated: 2024/02/12 19:03:59 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";

	//pointer to string
	std::string *stringPTR = &str;
	//ref to string
	std::string &stringREF = str;
	std::cout << "Mem addr x str variable: " << "\x1b[31m" << &str << "\x1b[0m"<< std::endl;
	std::cout << "Mem addr in stringPTR: " << "\x1b[31m" << stringPTR << "\x1b[0m" << std::endl;
	std::cout << "Mem addr in string REF: " << "\x1b[31m" << &stringREF << "\x1b[0m" << std::endl;
	std::cout << "Value of str: " << "\x1b[31m" << str << "\x1b[0m" << std::endl;
	std::cout << "Value pointed by stringPTR: " << "\x1b[31m" << *stringPTR << "\x1b[0m" << std::endl;
	std::cout << "value pointed by stringREF: " << "\x1b[31m" << stringREF << "\x1b[0m" << std::endl;
	return (0);
}
