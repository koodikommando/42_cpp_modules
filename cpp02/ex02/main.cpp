/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarejok <okarejok@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:09:30 by okarejok          #+#    #+#             */
/*   Updated: 2024/07/25 17:20:26 by okarejok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}

// int main (void)
// {
// 	Fixed a(8);
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	Fixed b = a;
// 	if (b == a)
// 		std::cout << "b == a" << std::endl;
// 	else if (b != a)
// 		std::cout << "b != a" << std::endl;
// 	b = 2;
// 	std::cout << Fixed::min(b, a) << std::endl;
// 	std::cout << Fixed::max(b, a) << std::endl;
// 	b = b * a;
// 	std::cout << b << std::endl;
// 	std::cout << a-- << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << --a << std::endl;
// 	std::cout << a << std::endl;
// 	while (a <= 15)
// 	{
// 		a++;
// 		std::cout << a << std::endl;
// 	}
// 	while (a >= 0)
// 	{
// 		a--;
// 		std::cout << a << std::endl;
// 	}
// }