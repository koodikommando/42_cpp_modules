/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:45:24 by okarejok          #+#    #+#             */
/*   Updated: 2024/07/12 18:38:14 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phonenumber, std::string secret)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->phonenumber = phonenumber;
    this->secret = secret;
}

void Contact::info()
{
    std::cout << first_name << std::endl;
    std::cout << last_name << std::endl;
    std::cout << nickname << std::endl;
    std::cout << secret << std::endl;
}

void Contact::short_info(int i)
{
	std::cout << std::setw(10) << i + 1 << "|";
	if (first_name.length() > 10)
		std::cout << std::setw(10) << first_name.substr(0, 9) + "." << "|";
	else
		std::cout << std::setw(10) << first_name << "|";
	if (last_name.length() > 10)
		std::cout << std::setw(10) << last_name.substr(0, 9) + "." << "|";
	else
		std::cout << std::setw(10) << last_name << "|";
	if (nickname.length() > 10)
		std::cout << std::setw(10) << nickname.substr(0, 9) + "." << std::endl;
	else
		std::cout << std::setw(10) << nickname << std::endl;
}
