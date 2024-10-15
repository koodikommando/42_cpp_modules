/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:50:17 by okarejok          #+#    #+#             */
/*   Updated: 2024/07/22 15:26:11 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP


#include <iostream>
#include "Contact.hpp"
#include <limits> 

class Phonebook {
public:
    Phonebook();
    void    add_contact();
    void    open_phonebook();
private:
    Contact contacts[8];
    int     contact_count;
    std::string fill_field(std::string prompt);
    void wait_for_keypress();
    void    search();
    void    list_contacts();
    void    print_info_header();
};

#endif