/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:50:54 by okarejok          #+#    #+#             */
/*   Updated: 2024/08/24 17:56:49 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal(const std::string type);
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal &wronganimal);
		WrongAnimal &operator=(const WrongAnimal &rhs);
		void	makeSound() const;
		std::string	getType() const;
	protected:
		std::string	_type;
} ;

#endif