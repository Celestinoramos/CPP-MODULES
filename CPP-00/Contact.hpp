/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConctactClass.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cramos-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:04:09 by cramos-c          #+#    #+#             */
/*   Updated: 2025/04/24 15:22:36 by cramos-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact{
	private:
		std::string	fname;
		std::string	lname;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;
	public:
		Contact();
		void setContact();
		void displayFullList() const;
		void displayLines(int index) const;
		std::string truncate(const std::string& str) const;
};

#endif
