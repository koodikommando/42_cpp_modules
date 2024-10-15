/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:50:48 by okarejok          #+#    #+#             */
/*   Updated: 2024/08/25 18:07:50 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
std::cout << "==1. Default Constructor==" << std::endl;
const Animal* meta = new Animal();

std::cout << std::endl << "==3. Cat Constructor==" << std::endl;
const Animal* i = new Cat();

std::cout << std::endl << "==2. Dog Constructor==" << std::endl;
const Animal* j = new Dog();

std::cout << std::endl << "==3. WrongCat Constructor==" << std::endl;
const WrongAnimal* k = new WrongCat();

std::cout << std::endl << "==4. getType()==" << std::endl;
std::cout << meta->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << j->getType() << " " << std::endl;
std::cout << k->getType() << " " << std::endl;

std::cout << std::endl << "==5. makeSound()==" << std::endl;
meta->makeSound();
i->makeSound(); //will output the cat sound!
j->makeSound();
k->makeSound();

std::cout << std::endl << "==6. Destructors==" << std::endl;
delete i; 
delete j;
delete meta;
delete k;
return 0;
}

// #include "Animal.hpp"
// #include "Cat.hpp"
// #include "Dog.hpp"
// #include "WrongAnimal.hpp"
// #include "WrongCat.hpp"
// #include <iostream>

// int main()
// {
// 	{
// 	std::cout << "---------------------" << std::endl;
//     std::cout << "TEST FROM THE SUBJECT" << std::endl;
//     std::cout << "---------------------" << std::endl;

// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();

// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound(); //will output the cat sound!
// 	j->makeSound();
// 	meta->makeSound();
	
// 	std::cout << std::endl << "WrongAnimal & WrongCat:" << std::endl;
// 	const WrongAnimal* wrongAnimal = new WrongAnimal();
// 	const WrongAnimal* cat = new WrongCat();
	
// 	std::cout << cat->getType() << " " << std::endl;
// 	cat->makeSound(); //will output the wronganimal sound!
// 	wrongAnimal->makeSound();
	
// 	delete(meta);
// 	delete(j);
// 	delete(i);
// 	delete(wrongAnimal);
// 	delete(cat);
// 	}

// 	{
// 	std::cout << "----------------------" << std::endl;
//     std::cout << "COPY CONSTRUCTOR TESTS" << std::endl;
//     std::cout << "----------------------" << std::endl;

// 	const Dog* dog = new Dog();
// 	const Dog* dogCopy = new Dog(*dog);
// 	std::cout << "dogCopy type: " << dogCopy->getType() << std::endl;
// 	dogCopy->makeSound();

// 	delete dog;
// 	delete dogCopy;
// 	}

// 	{
// 	std::cout << "------------------------------" << std::endl;
//     std::cout << "COPY ASSIGNMENT OPERATOR TESTS" << std::endl;
//     std::cout << "------------------------------" << std::endl;

// 	const Dog* dog = new Dog();
// 	Dog* dogCopy = new Dog();
// 	*dogCopy = *dog;
// 	std::cout << "dogCopy type: " << dogCopy->getType() << std::endl;
// 	dogCopy->makeSound();

// 	delete dog;
// 	delete dogCopy;
// 	}

// 	return 0;
// }