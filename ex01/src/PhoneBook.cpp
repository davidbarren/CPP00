/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:40:54 by dbarrene          #+#    #+#             */
/*   Updated: 2024/07/29 16:03:19 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

std::string	truncate(std::string str)
{
	if (str.length() > 10)
	{
		str = str.substr(0, 10);
		str[9] = '.';
	}
		return (str);
}

int	verify_contact(Contact contact)
{
	std::string data;
	int	rv;
	
	rv = 0;
	data = contact.get_first_name();
	if (data.empty())
		rv = 1;
	data = contact.get_last_name();
	if (data.empty())
		rv = 1;
	data = contact.get_nickname();
	if (data.empty())
		rv = 1;
	data = contact.get_secret();
	if (data.empty())
		rv = 1;
	data = contact.get_phone_num();
	if (data.empty())
		rv = 1;
	data = contact.get_phone_num();
	if (data.empty())
		rv = 1;
	return (rv);
}
void PhoneBook::add_contact(Contact &contact, PhoneBook &Phonebook)
{
	static int	index;

	std::string data;
	std::cout << "Input First Name" << std::endl;
	std::getline(std::cin, data);
	contact.set_first_name(data);
	std::cout << "Input Last Name" << std::endl;
	std::getline(std::cin, data);
	contact.set_last_name(data);
	std::cout << "Input Nickname" << std::endl;
	std::getline(std::cin, data);
	contact.set_nickname(data);
	std::cout << "Input Phone Number" << std::endl;
	std::getline(std::cin, data);
	contact.set_phone_number(data);
	std::cout << "Input Darkest Secret" << std::endl;
	std::getline(std::cin, data);
	contact.set_secret(data);
	contact.set_index(index);
	if (verify_contact(contact))
	{
		std::cout << "Contact Fields Must Contain Something Please try to ADD again" << std::endl;
		return ;
	}
	std::cout << "contact added at index:" << index << std::endl;
	std::cout << "Contact added succesfully" << std::endl;
	update_array(contact, Phonebook, index);
	Phonebook.index = index;
	index++;
	if (index >= CONTACT_MAX)
		index %= CONTACT_MAX;

}

void PhoneBook::update_array (Contact contact, PhoneBook& Phonebook, int index)
{
	Phonebook.contacts[index] = contact;
}
void PhoneBook::display_contacts(Contact contact, PhoneBook Phonebook)
{
	for (int i = 0; i < CONTACT_MAX; i++)
	{
		if (Phonebook.contacts[i].index != -1)
		{
		contact = Phonebook.contacts[i];
	std::cout << std::right << std::setw(10) << truncate(contact.get_index()) << "|"
		<< truncate(contact.get_first_name()) << "|" << truncate (contact.get_last_name()) << "|" <<
		contact.get_nickname() << std::endl;
		}
	}
}
void PhoneBook::display_specific_contact(Contact contact, PhoneBook& Phonebook, int index)
{
	contact = Phonebook.contacts[index];
	std::cout << contact.get_first_name() << std::endl;
	std::cout << contact.get_last_name() << std::endl;
	std::cout << contact.get_nickname() << std::endl;
	std::cout << contact.get_phone_num() << std::endl;
	std::cout << contact.get_secret() << std::endl;
}
