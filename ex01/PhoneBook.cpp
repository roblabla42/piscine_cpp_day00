/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 16:13:43 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/15 18:32:26 by rlambert         ###   ########.fr       */
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
	if (cursor >= MAX_CONTACTS)
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

void				PhoneBook::for_each(void (*fn)(int i, Contact c))
{
	size_t i = 0;
	while (i < cursor)
	{
		fn(i, contacts[i]);
		i++;
	}
}

bool				PhoneBook::can_add()
{
	return (cursor < MAX_CONTACTS);
}
