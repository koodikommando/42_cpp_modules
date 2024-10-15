/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:40:30 by okarejok          #+#    #+#             */
/*   Updated: 2024/07/23 16:40:31 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
	public:
		Harl( void );
		~Harl( void );
		void complain( std::string level );
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
} ;

#endif