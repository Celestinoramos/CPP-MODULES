/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cramos-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 11:12:01 by cramos-c          #+#    #+#             */
/*   Updated: 2025/04/28 12:16:55 by cramos-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact() {}

void	Contact::setContact()
{
	do {
		std::cout << "The First Name: " << std::endl;
		std::getline(std::cin, fname);
		if (fname.empty())
			std::cout << "!!ERROR!! Campo obrigatorio. \n";
	} while (fname.empty());
	
	do {
		std::cout << "The Last Name: " << std::endl;
		std::getline(std::cin, lname);
		if (lname.empty())
			std::cout << "!!ERROR!! Campo obrigatorio. \n";
	} while (lname.empty());
	
	do {
		std::cout << "The Nickname: " << std::endl;
		std::getline(std::cin, nickname);
		if (nickname.empty());
	} while (nickname.empty());
	
	while (true)
	{
		std::cout << "The Phone Number: " << std::endl;
		std::getline(std::cin, phoneNumber);
		
		bool	valid = true;
		
		for (char c : phoneNumber)
		{
			if (!std::isdigit(c))
			{
				valid = false;
				break;
			}
		}
		if (valid && !phoneNumber.empty())
			break;
		else
			std::cout << "!!ERROR!! apenas números são validos. \n";
	}
	
	do {
		std::cout << "Your Darkest Secret: " << std::endl;
		std::getline(std::cin, darkestSecret);
		if (darkestSecret.empty());
	} while (darkestSecret.empty());
}

void	Contact::displayFullList() const
{
	std::cout << "The First Name: " << fname << std::endl;
	std::cout << "The Last Name: " << lname << std::endl;
	std::cout << "The Nickname: " << nickname << std::endl;
	std::cout << "The Phone Number: " << phoneNumber << std::endl;
	std::cout << "The DarkestSecret: " << darkestSecret << std::endl; 
}

std::string Contact::truncate(const std::string& str) const
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void Contact::displayLines(int index) const
{
	std::cout << "|"
	          << std::setw(10) << index << "|"
	          << std::setw(10) << truncate(fname) << "|"
	          << std::setw(10) << truncate(lname) << "|"
	          << std::setw(10) << truncate(nickname) << "|"
	          << std::endl;
}
