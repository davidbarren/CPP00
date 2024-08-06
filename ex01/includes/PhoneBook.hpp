/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:41:17 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/06 15:56:29 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
# define CONTACT_MAX 8
#include <iomanip>
class Contact;
class PhoneBook
{
	public:
	PhoneBook();
	void update_array (Contact contact, PhoneBook& Phonebook, int index);
	void add_contact(Contact& contact, PhoneBook& Phonebook);
	void search_contact(Contact contact, PhoneBook Phonebook);
	void display_contacts(Contact contact, PhoneBook Phonebook);
	void display_specific_contact(Contact contact, PhoneBook& Phonebook, int index);
	void set_index(int newindex);
	void exit();
	int		index;
	private:
	Contact contacts[CONTACT_MAX];
};
