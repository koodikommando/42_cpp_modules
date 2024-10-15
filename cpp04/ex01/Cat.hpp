/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:50:40 by okarejok          #+#    #+#             */
/*   Updated: 2024/08/24 18:36:56 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat &cat);
		Cat &operator=(const Cat &cat);
		void	makeSound() const;
        std::string getIdea(int index);
        void setIdea(std::string idea, int index);
		Brain *getBrain(void);
	private:
		Brain *_brain;
} ;

#endif