/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_zombie.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:38:51 by okarejok          #+#    #+#             */
/*   Updated: 2024/07/23 16:38:51 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie* zombie = new Zombie(name);
    return zombie;
}