/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cramos-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:23:18 by cramos-c          #+#    #+#             */
/*   Updated: 2025/04/24 15:33:32 by cramos-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{	
	private:
		Contact	contacts[8];
		int	conctCount;
		int	nextIndex;
	public:
		PhoneBook();
		void addContact();
		void searchContacts() const;
};

#endif

