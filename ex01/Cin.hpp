/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cin.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/11 14:33:22 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/11 14:47:26 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CIN_HPP
# define CIN_HPP

#include <string>

struct	Cin
{
	Cin(std::string str);
	std::string	operator()();

private:
	std::string	val;
};

#endif
