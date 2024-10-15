/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:39:27 by okarejok          #+#    #+#             */
/*   Updated: 2024/10/15 18:01:32 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string name);
		void	attack();
		void	setWeapon(Weapon &weapon);
	private:
		std::string name;
		Weapon	*weapon;
} ;

#endif