/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 15:31:30 by okarejok          #+#    #+#             */
/*   Updated: 2024/07/26 17:06:12 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("No Name"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap) : _name(claptrap._name), _hitPoints(claptrap._hitPoints), _energyPoints(claptrap._energyPoints), _attackDamage(claptrap._attackDamage)
{
	std::cout << "Claptrap Copy Constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
	std::cout << "Copy assignation operator called" << std::endl;
	if (this != &claptrap)
	{
		_name = claptrap._name;
		_hitPoints = claptrap._hitPoints;
		_energyPoints = claptrap._energyPoints;
		_attackDamage = claptrap._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_hitPoints == 0)
	{
		std::cout << "Claptrap " << _name << " cant attack, because its dead" << std::endl;
	}
	else if (_energyPoints == 0)
	{
		std::cout << "Claptrap " << _name << " has no energy to attack." << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "Claptrap " << _name << " cant repair itself, because its dead." << std::endl;
	}
	else if (_energyPoints == 0)
	{
		std::cout << "Claptrap " << _name << " has no energypoints to repair itself." << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " repairs itself " << amount << " HP" << std::endl;
		_hitPoints += amount;
		_energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
	if (amount > _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
}

