/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:40:28 by okarejok          #+#    #+#             */
/*   Updated: 2024/07/23 16:40:29 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{
	return ;
}

Harl::~Harl( void )
{
	return ;
}

void Harl::debug(void)
{
	std::cout << "DEBUG" << std::endl;
}

void Harl::info(void)
{
	std::cout << "INFO" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "WARNING" << std::endl;
}

void Harl::error(void)
{
	std::cout << "ERROR" << std::endl;
}

void Harl::complain( std::string level ) {
	
	void (Harl::*func[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	int i = 0;
	for (std::string lvl : levels)	
	{
		if (lvl == level)
		{
			(this->*func[i])();
			return;
		}
		i++;
	}
}