/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:50:45 by okarejok          #+#    #+#             */
/*   Updated: 2024/08/24 18:36:49 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog &dog);
		Dog &operator=(const Dog &dog);
		void	makeSound() const;
	    std::string getIdea(int index);
        void setIdea(std::string idea, int index);
		Brain *getBrain(void);
	private:
		Brain *_brain;
} ;

#endif