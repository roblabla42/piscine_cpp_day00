/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/11 14:32:25 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/11 14:48:00 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include<string>
# include"Cin.hpp"

class Contact {
	std::string		_first_name;
	std::string		_last_name;
	std::string		_nickname;
	std::string		_postal_address;
	std::string		_email_address;
	std::string		_phone_number;
	std::string		_birthday_date;
	std::string		_favorite_meal;
	std::string		_underwear_color;
	std::string		_darkest_secret;

	Contact(std::string first_name, std::string last_name,
			std::string nickname, std::string postal_address,
			std::string email_address, std::string phone_number,
			std::string birthday_date, std::string favorite_meal,
			std::string underwear_color, std::string darkest_secret);
public:
	class Builder;
	Contact();

	std::string		first_name();
	std::string		last_name();
	std::string		nickname();
	std::string		postal_address();
	std::string		email_address();
	std::string		phone_number();
	std::string		birthday_date();
	std::string		favorite_meal();
	std::string		underwear_color();
	std::string		darkest_secret();
};

class Contact::Builder {
	std::string		_first_name;
	std::string		_last_name;
	std::string		_nickname;
	std::string		_postal_address;
	std::string		_email_address;
	std::string		_phone_number;
	std::string		_birthday_date;
	std::string		_favorite_meal;
	std::string		_underwear_color;
	std::string		_darkest_secret;

public:
	Builder();
	Builder	&first_name(Cin first_name);
	Builder	&last_name(Cin last_name);
	Builder	&nickname(Cin nickname);
	Builder	&postal_address(Cin postal_address);
	Builder	&email_address(Cin email_address);
	Builder	&phone_number(Cin phone_number);
	Builder	&birthday_date(Cin birthday_date);
	Builder	&favorite_meal(Cin favorite_meal);
	Builder	&underwear_color(Cin underwear_color);
	Builder	&darkest_secret(Cin darkest_secret);
	Builder	&first_name(std::string first_name);
	Builder	&last_name(std::string last_name);
	Builder	&nickname(std::string nickname);
	Builder	&postal_address(std::string postal_address);
	Builder	&email_address(std::string email_address);
	Builder	&phone_number(std::string phone_number);
	Builder	&birthday_date(std::string birthday_date);
	Builder	&favorite_meal(std::string favorite_meal);
	Builder	&underwear_color(std::string underwear_color);
	Builder	&darkest_secret(std::string darkest_secret);
	Contact	build();
};

#endif
