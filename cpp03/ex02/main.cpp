/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 15:31:19 by okarejok          #+#    #+#             */
/*   Updated: 2024/07/26 15:37:14 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap fragtrap("clapper");
	fragtrap.attack("goblin");
	fragtrap.attack("goblin");
	fragtrap.takeDamage(8);
	fragtrap.beRepaired(8);
	fragtrap.attack("goblin");
	fragtrap.takeDamage(8);
	fragtrap.beRepaired(8);
	fragtrap.takeDamage(8);
	fragtrap.attack("goblin");
	fragtrap.beRepaired(90);
	fragtrap.takeDamage(100);
	fragtrap.attack("goblin");
	fragtrap.beRepaired(100);
	fragtrap.highFivesGuys();
	// for (int i = 0; i < 50; i++)
	// 	fragtrap.attack("goblin");
	fragtrap.takeDamage(2200);
	fragtrap.attack("matti");
	fragtrap.highFivesGuys();
	return (0);
}