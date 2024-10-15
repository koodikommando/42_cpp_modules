/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 17:43:32 by okarejok          #+#    #+#             */
/*   Updated: 2024/07/12 18:58:17 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	std::cout << "Constructor called" << std::endl;
	contact_count = 0;
}

std::string Phonebook::fill_field(std::string prompt)
{
	std::string field;
	while (field.empty())
	{
		std::cout << prompt;
		std::getline(std::cin, field);
		if (std::cin.eof())
			exit (1);
	}
	return (field);
}

void Phonebook::print_info_header() {
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << std::endl;
    std::cout << std::setw(10) << "----------" << "|";
    std::cout << std::setw(10) << "----------" << "|";
    std::cout << std::setw(10) << "----------" << "|";
    std::cout << std::setw(10) << "----------" << std::endl;
}

void Phonebook::wait_for_keypress()
{
    std::string temp;
    std::getline(std::cin, temp);
	if (std::cin.eof())
		exit (1);
}

void	Phonebook::add_contact()
{
	static int	counter = 0;
	system("clear");
	std::string first_name, last_name, nickname, phonenumber, secret;
	first_name = fill_field("First name: ");
	last_name = fill_field("Last name: ");
	nickname = fill_field("Nickname: ");
	phonenumber = fill_field("Phonenumber: ");
	secret = fill_field("Darkest secret: ");
	contacts[counter] = Contact(first_name, last_name, nickname, phonenumber, secret);
	if (contact_count < 8)
		contact_count++;
	counter++;
	if (counter > 7)
		counter = 0;
	std::cout << "Contact added succesfully. Press any key to continue..." << std::endl;
	wait_for_keypress();

}

void Phonebook::search()
{
	int	index;
	int	i;

	i = 0;
	system("clear");
	if (contact_count == 0)
		std::cout << "You have no contacts." << std::endl;
	else
	{
		print_info_header();
		list_contacts();
		while (!i)
		{
			std::cout << "Enter index (type -1 to exit search): ";
			std::cin >> index;
			if (std::cin.eof())
				break ;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(10000, '\n');
				std::cout << "Invalid input. Please enter a number." << std::endl;
				continue ;
			}
			if (index == -1)
				return ;
			if (index <= 0 || index > contact_count)
			{
				std::cout << "Invalid index. Please enter a number." << std::endl;
				continue ;
			}
			system("clear");
			contacts[index - 1].info();
			break ;
		} 
	}
	std::cin.clear(); // Clear error state
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
	std::cout << "Press any key to continue." << std::endl;
	wait_for_keypress();
}

void	Phonebook::list_contacts()
{
	for (int i = 0; i < contact_count; i++)
		contacts[i].short_info(i);
}

void	Phonebook::open_phonebook()
{
	std::string command;
	while (42)
	{
		system("clear");
		std::cout << "ADD, SEARCH, OR EXIT: ";
		std::getline(std::cin, command);
		if (command == "ADD")
			add_contact();
		if (command == "SEARCH")
			search();
		if (command == "EXIT")
			break;
		if (std::cin.eof())
			break;
	}
}
	