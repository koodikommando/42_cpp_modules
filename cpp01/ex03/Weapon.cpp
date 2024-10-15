/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:39:39 by okarejok          #+#    #+#             */
/*   Updated: 2024/07/23 16:39:39 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string type)
{
	this->type = type;
}

void Weapon::setType(std::string weapon_type)
{
	this->type = weapon_type;
}

const std::string& Weapon::getType()
{
	return this->type;
}

void Weapon::attack() {
	std::cout << "attack";
}