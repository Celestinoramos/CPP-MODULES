/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cramos-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 11:57:58 by cramos-c          #+#    #+#             */
/*   Updated: 2025/04/26 11:58:01 by cramos-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : conctCount(0), nextIndex(0) {}

void	PhoneBook::addContact()
{
	contacts[nextIndex].setContact();
	nextIndex = (nextIndex + 1) % 8;
	if (conctCount < 8)
		conctCount++;
}

void PhoneBook::searchContacts() const
{
	std::cout << "|Index     |First Name|Last Name|Nickname   |" << std::endl;
	for (int i = 0; i < conctCount; ++i)
	{
		contacts[i].displayLines(i);
	}

	std::cout << "Digite o index para ver a informação detalhada: ";
	std::string input;
	std::getline(std::cin, input);

	while (true)
	{	
		if (std::cin.eof())
			return;

		bool valid = true;
		for (char c : input)
		{
			if (!std::isdigit(c))
			{
				valid = false;
				break;
			}
		}

		if (valid && !input.empty())
		{
			int index = std::stoi(input);
			if (index >= 0 && index < conctCount)
			{
				contacts[index].displayFullList();
				break;
			}
		}
		std::cout << "Index invalido. Digite novamente: ";
		std::getline(std::cin, input);
	}
}
