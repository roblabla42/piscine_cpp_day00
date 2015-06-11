/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 14:06:26 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/11 14:46:03 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include<string>
# include"Contact.hpp"
class	PhoneBook {
	Contact	contacts[8];
	size_t	cursor;

public:
	void	add_contact(Contact);
	Contact	search_contact(size_t id);
	template<class Function>
	void	for_each(Function fn)
	{
		size_t i = 0;
		while (i < cursor)
		{
			fn(i, contacts[i]);
			i++;
		}
	}
	PhoneBook();
};

#endif
