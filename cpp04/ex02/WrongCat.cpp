/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:50:56 by okarejok          #+#    #+#             */
/*   Updated: 2024/08/24 15:46:03 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Wrongcat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const std::string type) : WrongAnimal(type)
{
	std::cout << "WrongCat type constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &WrongCat) : WrongAnimal(WrongCat)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &WrongCat)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &WrongCat)
	{
		this->_type = WrongCat._type;
	}
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << _type << ": [wrong cat sound]" << std::endl;
}