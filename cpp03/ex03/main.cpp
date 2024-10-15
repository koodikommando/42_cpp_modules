/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 15:31:56 by okarejok          #+#    #+#             */
/*   Updated: 2024/07/26 15:57:14 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diamond("timantti");
	diamond.whoAmI();
	diamond.attack("a shithead");
	diamond.takeDamage(50);
	diamond.beRepaired(50);
	diamond.guardGate();
	diamond.highFivesGuys();
	diamond.takeDamage(1000);
	diamond.attack("a shithead");
	diamond.beRepaired(50);
	diamond.guardGate();
	diamond.highFivesGuys();
	return (0);
}