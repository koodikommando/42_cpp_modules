/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:50:43 by okarejok          #+#    #+#             */
/*   Updated: 2024/08/24 18:36:21 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
	std::cout << "Dog copy constructor called" << std::endl;
	_brain = new Brain();
	for (int i = 0; i < 100; i++)
		_brain->setIdea(dog._brain->getIdea(i), i);
}


Dog&	Dog::operator=(const Dog& dog)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &dog)
	{
		this->_type = dog._type;
		for (int i = 0; i < 100; i++)
			_brain->setIdea(dog._brain->getIdea(i), i);
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << _type << ": wuff" << std::endl;
}

std::string Dog::getIdea(int index)
{
    if (index >= 0 && index < 100)
		return this->_brain->getIdea(index);
	else
		return ("no idea");
}

void    Dog::setIdea(std::string idea, int index)
{
    if (index >= 0 && index < 100)
        this->_brain->setIdea(idea, index);
}

Brain* Dog::getBrain(void)
{
	return (_brain);
}