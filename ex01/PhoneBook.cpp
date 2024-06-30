/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:40:54 by dbarrene          #+#    #+#             */
/*   Updated: 2024/07/01 00:37:36 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add_contact(Contact contact)
{
	std::string data;
	std::cout << "Input  First Name" << std::endl;
	std::getline(std::cin, data);
	if (!data.empty())	
		contact.set_first_name(data);
	std::cout << "Input  Last Name" << std::endl;
	std::getline(std::cin, data);
	if (data.length())
		contact.set_last_name(data);
	std::cout << "Input Nickname" << std::endl;
	std::getline(std::cin, data);
	if (data.length())
		contact.set_phone_number(data);
	std::cout << "Input Phone Number" << std::endl;
	std::getline(std::cin, data);
	if (data.length())
		contact.set_nickname(data);
	std::cout << "Input Darkest Secret" << std::endl;
	std::getline(std::cin, data);
	if (data.length())
		contact.set_secret(data);
	std::cout << "Contact added succesfully" << std::endl;

}
