/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 16:13:43 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/11 14:51:14 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(): cursor(0)
{
}

void	PhoneBook::add_contact(Contact contact)
{
	if (cursor >= 8)
		throw std::range_error("too many items");
	contacts[cursor++] = contact;
}

Contact				PhoneBook::search_contact(size_t id)
{
	if (id < cursor)
		return (contacts[id]);
	else
		throw std::range_error("search_contact id");
}
