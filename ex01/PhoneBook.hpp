/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 14:06:26 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/15 18:31:50 by rlambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include<string>
# include"Contact.hpp"

# define MAX_CONTACTS 8

class	PhoneBook {
	Contact	contacts[MAX_CONTACTS];
	size_t	cursor;

public:
	void	add_contact(Contact);
	Contact	search_contact(size_t id);
	void	for_each(void (*fn)(int i, Contact c));
	PhoneBook();
	bool	can_add();
};

#endif
