/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 14:05:34 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/11 14:51:58 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <iostream>
#include "PhoneBook.hpp"

Contact		prompt_add()
{
	return (Contact::Builder()
			.first_name(Cin("first_name> "))
			.last_name(Cin("last_name> "))
			.nickname(Cin("nickname> "))
			.postal_address(Cin("postal_address> "))
			.email_address(Cin("email_address> "))
			.phone_number(Cin("phone_number> "))
			.birthday_date(Cin("birthday_date> "))
			.favorite_meal(Cin("favorite_meal> "))
			.underwear_color(Cin("underwear_color> "))
			.darkest_secret(Cin("darkest_secret> "))
			.build());
}

std::string	str_tbl(std::string str, unsigned i)
{
	if (str.length() <= i)
		return (str.resize(i, ' '), str);
	else
		return (str.substr(0, i - 1) + ".");
}

// Assuming i is 0 <= i < 10
void		show_contact(int i, Contact c)
{
	std::cout	<< i << std::string(9, ' ') << "|"
				<< str_tbl(c.first_name(), 10) << "|"
				<< str_tbl(c.last_name(), 10) << "|"
				<< str_tbl(c.nickname(), 10) << std::endl;
}

void		show_contact_full(Contact c)
{
	std::cout	<< "first_name: " << c.first_name() << std::endl
				<< "last_name: " << c.last_name() << std::endl
				<< "nickname: " << c.nickname() << std::endl
				<< "postal_address: " << c.postal_address() << std::endl
				<< "email_address: " << c.email_address() << std::endl
				<< "phone_number: " << c.phone_number() << std::endl
				<< "birthday_date: " << c.birthday_date() << std::endl
				<< "favorite_meal: " << c.favorite_meal() << std::endl
				<< "underwear_color: " << c.underwear_color() << std::endl
				<< "darkest_secret: " << c.darkest_secret() << std::endl;
}

void		show_header()
{
	std::cout	<< str_tbl("id", 10) << "|"
				<< str_tbl("first_name", 10) << "|"
				<< str_tbl("last_name", 10) << "|"
				<< str_tbl("nickname", 10) << std::endl;
}

int		prompt_contact()
{
	int		out;

	std::cout << "ID> ";
	if (!(std::cin >> out))
		throw std::string("bleh");
	return (out);
}

int		main()
{
	std::string	cmd;
	PhoneBook	book;

	cmd = "";
	std::cout << "PhoneBook> ";
	while ((std::cin >> cmd) && cmd != "EXIT")
	{
		if (cmd == "ADD")
		{
			try {
				book.add_contact(prompt_add());
			} catch (std::range_error e)
			{
				std::cout << "Already too many items. Sorry :D";
			}
		}
		else if (cmd == "SEARCH")
		{
			try {
				show_header();
				book.for_each(show_contact);
				show_contact_full(book.search_contact(prompt_contact()));
			} catch (std::string e) {
				std::cout << "ID should be a string";
				std::cin.clear();
			} catch (std::range_error e) {
				std::cout << "Index out of range";
			}
		}
		std::cout << std::endl << "PhoneBook> ";
	}
	std::cout << std::endl;
}
