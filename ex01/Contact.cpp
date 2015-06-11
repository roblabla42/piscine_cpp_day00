/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/11 14:43:56 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/11 14:48:21 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(	std::string first_name, std::string last_name,
					std::string nickname, std::string postal_address,
					std::string email_address, std::string phone_number,
					std::string birthday_date, std::string favorite_meal,
					std::string underwear_color, std::string darkest_secret):
		_first_name(first_name), _last_name(last_name), _nickname(nickname),
		_postal_address(postal_address), _email_address(email_address),
		_phone_number(phone_number), _birthday_date(birthday_date),
		_favorite_meal(favorite_meal), _underwear_color(underwear_color),
		_darkest_secret(darkest_secret)
{

}

std::string		Contact::first_name()
{
		return this->_first_name;
}

std::string		Contact::last_name()
{
		return this->_last_name;
}

std::string		Contact::nickname()
{
		return this->_nickname;
}

std::string		Contact::postal_address()
{
		return this->_postal_address;
}

std::string		Contact::email_address()
{
		return this->_email_address;
}

std::string		Contact::phone_number()
{
		return this->_phone_number;
}

std::string		Contact::birthday_date()
{
		return this->_birthday_date;
}

std::string		Contact::favorite_meal()
{
		return this->_favorite_meal;
}

std::string		Contact::underwear_color()
{
		return this->_underwear_color;
}

std::string		Contact::darkest_secret()
{
		return this->_darkest_secret;
}

// TODO : Provide sane defaults
Contact::Builder::Builder()
{
}

Contact::Builder	&Contact::Builder::first_name(Cin name)
{
	return (this->first_name(name()));
}

Contact::Builder	&Contact::Builder::last_name(Cin name)
{
	return (this->last_name(name()));
}

Contact::Builder	&Contact::Builder::nickname(Cin name)
{
	return (this->nickname(name()));
}

Contact::Builder	&Contact::Builder::postal_address(Cin name)
{
	return (this->postal_address(name()));
}

Contact::Builder	&Contact::Builder::email_address(Cin name)
{
	return (this->email_address(name()));
}

Contact::Builder	&Contact::Builder::phone_number(Cin name)
{
	return (this->phone_number(name()));
}

Contact::Builder	&Contact::Builder::birthday_date(Cin name)
{
	return (this->birthday_date(name()));
}

Contact::Builder	&Contact::Builder::favorite_meal(Cin name)
{
	return (this->favorite_meal(name()));
}

Contact::Builder	&Contact::Builder::underwear_color(Cin name)
{
	return (this->underwear_color(name()));
}

Contact::Builder	&Contact::Builder::darkest_secret(Cin name)
{
	return (this->darkest_secret(name()));
}

Contact::Builder	&Contact::Builder::first_name(std::string name)
{
	_first_name = name;
	return *this;
}

Contact::Builder	&Contact::Builder::last_name(std::string name)
{
	_last_name = name;
	return *this;
}

Contact::Builder	&Contact::Builder::nickname(std::string name)
{
	_nickname = name;
	return *this;
}

Contact::Builder	&Contact::Builder::postal_address(std::string name)
{
	_postal_address = name;
	return *this;
}

Contact::Builder	&Contact::Builder::email_address(std::string name)
{
	_email_address = name;
	return *this;
}

Contact::Builder	&Contact::Builder::phone_number(std::string name)
{
	_phone_number = name;
	return *this;
}

Contact::Builder	&Contact::Builder::birthday_date(std::string name)
{
	_birthday_date = name;
	return *this;
}

Contact::Builder	&Contact::Builder::favorite_meal(std::string name)
{
	_favorite_meal = name;
	return *this;
}

Contact::Builder	&Contact::Builder::underwear_color(std::string name)
{
	_underwear_color = name;
	return *this;
}

Contact::Builder	&Contact::Builder::darkest_secret(std::string name)
{
	_darkest_secret = name;
	return *this;
}

Contact				Contact::Builder::build()
{
	return Contact(	_first_name, _last_name, _nickname, _postal_address,
					_email_address, _phone_number, _birthday_date,
					_favorite_meal, _underwear_color, _darkest_secret);
}

Contact::Contact()
{
}

