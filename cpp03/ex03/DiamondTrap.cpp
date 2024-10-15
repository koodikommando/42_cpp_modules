/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 15:31:40 by okarejok          #+#    #+#             */
/*   Updated: 2024/07/26 15:44:36 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	ClapTrap::_name = "unknown_clap_name";
	_name = "unknown";
    _energyPoints = 50;
	std::cout << "DiamondTrap default constructor" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name")
{
	_name =  name;
    _energyPoints = 50;
	std::cout << this->_name << ": DiamondTrap name constructor called." << std::endl;
	std::cout << this->_name << ": HP = " << this->_hitPoints << std::endl;
	std::cout << this->_name << ": Energy points = " << this->_energyPoints << std::endl;
	std::cout << this->_name << ": Attack damage = " << this->_attackDamage << std::endl;
}


DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap) : ClapTrap(diamondtrap), ScavTrap(diamondtrap), FragTrap(diamondtrap)
{
	_name = diamondtrap._name;
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondtrap)
{
	std::cout << "ClapTrap copy assignation operator called" << std::endl;
	if (this != &diamondtrap)
	{
		this->_attackDamage = diamondtrap._attackDamage;
		this->_energyPoints = diamondtrap._energyPoints;
		this->_hitPoints = diamondtrap._energyPoints;
		this->_name = diamondtrap._name;
	}
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << _name <<  std::endl;
	std::cout << "but my ClapTrap name is "  << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}