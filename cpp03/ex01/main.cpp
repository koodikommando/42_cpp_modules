/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 15:30:58 by okarejok          #+#    #+#             */
/*   Updated: 2024/07/26 15:30:59 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap scavtrap("clapper");
	scavtrap.attack("goblin");
	scavtrap.attack("goblin");
	scavtrap.takeDamage(8);
	scavtrap.beRepaired(8);
	scavtrap.attack("goblin");
	scavtrap.takeDamage(8);
	scavtrap.beRepaired(8);
	scavtrap.takeDamage(8);
	scavtrap.attack("goblin");
	scavtrap.beRepaired(90);
	scavtrap.takeDamage(100);
	scavtrap.attack("goblin");
	scavtrap.beRepaired(100);
	// for (int i = 0; i < 50; i++)
	// 	scavtrap.attack("goblin");
	scavtrap.guardGate();
	scavtrap.takeDamage(2200);
	scavtrap.attack("matti");
	scavtrap.guardGate();
	return (0);
}