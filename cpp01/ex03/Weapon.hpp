/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:39:41 by okarejok          #+#    #+#             */
/*   Updated: 2024/07/23 16:39:42 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP


#include <iostream>
#include "Weapon.hpp"


class Weapon {
	public:
		Weapon(std::string type);
		void setType(std::string weapon_type);
		const std::string& getType();
		void attack();
	private:
		std::string type;
};

#endif