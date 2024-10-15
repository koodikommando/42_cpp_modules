/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:39:02 by okarejok          #+#    #+#             */
/*   Updated: 2024/07/23 16:39:03 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main (void)
{
	Zombie *horde;
	int n = 8;

	horde = zombieHorde(n, "Boomer");
	for (int i = 0; i < n; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}