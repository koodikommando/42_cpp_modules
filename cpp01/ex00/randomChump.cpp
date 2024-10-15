/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_chump.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:38:53 by okarejok          #+#    #+#             */
/*   Updated: 2024/07/23 16:38:54 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie zombie(name);
	zombie.announce();
}