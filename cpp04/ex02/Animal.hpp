/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:50:34 by okarejok          #+#    #+#             */
/*   Updated: 2024/10/15 17:53:43 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	public:
		virtual ~Animal();
		virtual void	makeSound() const = 0;
		std::string	getType() const;
	protected:
		Animal &operator=(const Animal &animal);
		Animal(const std::string type);
		Animal(const Animal &animal);
		Animal();
		std::string	_type;
} ;

#endif