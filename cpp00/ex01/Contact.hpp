/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:43:10 by okarejok          #+#    #+#             */
/*   Updated: 2024/07/12 18:36:04 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <iostream>

#define C_COLOR "\033[32m";
#define C_DEF "\033[0m";

class Contact {
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phonenumber;
    std::string secret;
    int         index;
public:
    Contact();
    Contact(std::string first_name, std::string last_name, std::string nickname, std::string phonenumber, std::string secret);
    void    info();
    void    short_info(int i);
};

#endif

