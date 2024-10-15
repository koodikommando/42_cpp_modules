/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:50:34 by okarejok          #+#    #+#             */
/*   Updated: 2024/08/06 17:50:35 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	public:
		Animal();
		virtual ~Animal();
		Animal(const std::string type);
		Animal(const Animal &animal);
		Animal &operator=(const Animal &animal);
		virtual void	makeSound() const;
		std::string	getType() const;
	protected:
		std::string	_type;
} ;

#endif