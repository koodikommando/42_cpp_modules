/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 15:31:13 by okarejok          #+#    #+#             */
/*   Updated: 2024/07/26 15:46:57 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "Fragtrap default constructor called" << std::endl;
	std::cout << this->_name << ": HP = " << this->_hitPoints << std::endl;
	std::cout << this->_name << ": Energy points = " << this->_energyPoints << std::endl;
	std::cout << this->_name << ": Attack damage = " << this->_attackDamage << std::endl;
}
FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "Fragtrap name constructor called" << std::endl;
	std::cout << this->_name << ": HP = " << this->_hitPoints << std::endl;
	std::cout << this->_name << ": Energy points = " << this->_energyPoints << std::endl;
	std::cout << this->_name << ": Attack damage = " << this->_attackDamage << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap) : ClapTrap(fragtrap)
{
	std::cout << "Fragtrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
	std::cout << "FragTrap copy assignment constructor called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_attackDamage = rhs._attackDamage;
		this->_energyPoints = rhs._energyPoints;
		this->_hitPoints = rhs._hitPoints;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "Fragtrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (_hitPoints > 0)
		std::cout << "Fragtrap " << _name << " wants a high five" << std::endl;
	else
		std::cout << "Fragtrap " << _name << " cant ask for a high five, because its dead" << std::endl;
}