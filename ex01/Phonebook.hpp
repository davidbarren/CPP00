/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:41:17 by dbarrene          #+#    #+#             */
/*   Updated: 2024/06/26 20:00:55 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>
class PhoneBook
{
	public:
	PhoneBook()
	{
	}
	void add_contact(Contact contact);
	void search_contact(Contact contact);
	void exit();
	private:
	Contact contacts[8];
};
