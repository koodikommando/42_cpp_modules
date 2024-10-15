/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 15:30:42 by okarejok          #+#    #+#             */
/*   Updated: 2024/07/26 15:48:14 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap claptrap("clapper");
	claptrap.attack("goblin");
	claptrap.attack("goblin");
	claptrap.takeDamage(8);
	claptrap.beRepaired(8);
	claptrap.attack("goblin");
	claptrap.takeDamage(8);
	claptrap.beRepaired(8);
	claptrap.takeDamage(8);
	claptrap.attack("goblin");
	claptrap.beRepaired(90);
	claptrap.takeDamage(100);
	claptrap.attack("goblin");
	claptrap.beRepaired(100);
}