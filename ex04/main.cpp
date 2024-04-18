/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:42:45 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/11 15:31:59 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int 	main(int ac, char **av)
{
	if (ac == 4)
	{
		//get filename + str1 + str2
		std::string filename = av[1];
		std::string search = av[2];
		std::string replace = av[3];
		//open and create output file
		std::ofstream output("output.txt", std::ofstream::out);
		if (!output)
		{
			std::cerr << "\x1b[031m"<< "Error opening file : output.txt " << "\x1b[30m" << std::endl;
			return (1);
		}
		//open and read infile file
		std::ifstream input(filename);
		if (!input)
		{
			std::cerr << "\x1b[031m"<< "Error opening file : "<< filename << "\x1b[30m" << std::endl;
			return (1);
		}
		//read through file
		std::string line;
		while (std::getline(input, line))
		{
			size_t pos = line.find(search);
			while (pos != std::string::npos)
			{
				line = line.substr(0, pos) + replace + line.substr(pos + search.length());
				pos = line.find(search, pos + replace.length());
			}
			output << line << "\n";
		}
		//close everything
		input.close();
		output.close();
	}
	else
		std::cerr << "\x1b[031m"<< "Usage: " << "\x1b[30m" << "<filename> <string_1> <string_2>" << std::endl;
}
