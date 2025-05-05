/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test00.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cramos-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:34:52 by cramos-c          #+#    #+#             */
/*   Updated: 2025/04/24 12:11:30 by cramos-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <csignal>
#include <cstdlib>

void	signal_hand(int signal)
{
	(void)signal;
	std::exit(0);
}

int	main()
{
	PhoneBook phoneBook;
	std::string comando;
	std::cout << "  /************************************************/\n";
	std::cout << " /            My Awesome PhoneBook                /\n";
	std::cout << "/************************************************/\n";
	std::signal(SIGQUIT, signal_hand);
	
	while (true)
	{
		std::cout << "Digite um comando (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, comando);
		
		if (std::cin.eof())
			break;
		if (comando == "ADD")
			phoneBook.addContact();
		else if (comando == "SEARCH")
			phoneBook.searchContacts();
		else if (comando == "EXIT")
		{
			std::cout << "Leaving..." << std::endl;
			break;
		}
		else
		{
			std::cout << "*!!Comando invalido!!*" << std::endl;
			std::cout << "Os camandos sao \"ADD, SEARCH e EXIT \" " << std::endl;
		}
	}
	return (0);
}
