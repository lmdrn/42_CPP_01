/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:40:02 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/12 11:05:16 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP

# define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
	private:
		void 			debug(void);
		void 			info(void);
		void 			warning(void);
		void 			error(void);

	public:
		void 		complain(std::string level);
};

#endif
