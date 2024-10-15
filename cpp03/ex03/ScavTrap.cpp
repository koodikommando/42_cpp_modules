/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 15:31:58 by okarejok          #+#    #+#             */
/*   Updated: 2024/07/26 15:31:59 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav_trap) : ClapTrap(scav_trap)
{
	std::cout << "ScavTrap copy constructor operator called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scav_trap)
{
	std::cout << "ScavTrap copy assignation operator called" << std::endl;
	if (this != &scav_trap)
	{
		_name = scav_trap._name;
		_hitPoints = scav_trap._hitPoints;
		_energyPoints = scav_trap._energyPoints;
		_attackDamage = scav_trap._attackDamage;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (_hitPoints == 0)
		std::cout << "Scavtrap " << _name << " cant attack, because its dead" << std::endl;
	else if (_energyPoints == 0)
		std::cout << "Scavtrap " << _name << " has no energy to attack." << std::endl;
	else
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
}

void ScavTrap::guardGate()
{
	if (_hitPoints > 0)
		std::cout << "ScavTrap " << _name << " is now in gatekeeper mode" << std::endl;
	else
		std::cout << "ScavTrap " << _name << " cant go in gatekeeper mode, because its dead" << std::endl;
}