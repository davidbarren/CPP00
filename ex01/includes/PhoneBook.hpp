/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:41:17 by dbarrene          #+#    #+#             */
/*   Updated: 2024/07/29 16:34:51 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
# define CONTACT_MAX 8
#include <iomanip>
class Contact;
class PhoneBook
{
	public:
	Contact contacts[CONTACT_MAX];
	int		index;
	PhoneBook()
	{
		index = -1;
	}
	void update_array (Contact contact, PhoneBook& Phonebook, int index);
	void add_contact(Contact& contact, PhoneBook& Phonebook);
	void search_contact(Contact contact, PhoneBook Phonebook);
	void display_contacts(Contact contact, PhoneBook Phonebook);
	void display_specific_contact(Contact contact, PhoneBook& Phonebook, int index);
	void exit();
	private:
};
