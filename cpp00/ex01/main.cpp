/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:42:32 by okarejok          #+#    #+#             */
/*   Updated: 2024/07/12 17:45:43 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>


int main(void)
{
    Phonebook phonebook;
    phonebook.open_phonebook();
    system("clear");
    std::cout << "Have a nice day!" << std::endl;

}