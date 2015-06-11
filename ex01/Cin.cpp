/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cin.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/11 14:34:00 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/11 14:49:48 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cin.hpp"

Cin::Cin(std::string str) : val(str)
{
}

std::string	Cin::operator()()
{
	std::string	ret;

	std::cout << val;
	std::cin >> ret;
	return (ret);
}
