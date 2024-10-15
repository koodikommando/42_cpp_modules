/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:50:37 by okarejok          #+#    #+#             */
/*   Updated: 2024/08/24 18:34:30 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	_brain = new Brain;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

Cat::Cat(const Cat &cat) : Animal(cat)
{
	std::cout << "Cat copy constructor called" << std::endl;
	_brain = new Brain();
	for (int i = 0; i < 100; i++)
		_brain->setIdea(cat._brain->getIdea(i), i);
}

Cat &Cat::operator=(const Cat &cat)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &cat)
	{
		this->_type = cat._type;
		for (int i = 0; i < 100; i++)
			_brain->setIdea(cat._brain->getIdea(i), i);
	}
	return (*this);
}


void Cat::makeSound() const
{
	std::cout << _type << ": meow" << std::endl;
}


std::string Cat::getIdea(int index)
{
    if (index >= 0 && index < 100)
		return this->_brain->getIdea(index);
	else
		return ("no idea");
}

void    Cat::setIdea(std::string idea, int index)
{
    if (index >= 0 && index < 100)
        this->_brain->setIdea(idea, index);
}

Brain* Cat::getBrain(void)
{
	return (_brain);
}