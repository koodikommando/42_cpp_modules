/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:39:33 by okarejok          #+#    #+#             */
/*   Updated: 2024/10/15 18:02:28 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
{
Weapon club = Weapon("crude spiked club");
HumanA humanA("masa", club);
humanA.attack();
club.setType("some other type of club");
humanA.attack();
}
{
Weapon club = Weapon("crude spiked club");
HumanB humanB("tero");
humanB.attack();
humanB.setWeapon(club);
club.setType("some other type of club");
humanB.attack();
}
return 0;
}