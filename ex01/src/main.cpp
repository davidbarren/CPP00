/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 03:57:30 by dbarrene          #+#    #+#             */
/*   Updated: 2024/07/29 16:53:24 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include <iostream>

void	show_instructions(void)
{
	std::cout << "Welcome to the Awesome PhoneBook!" << std::endl;
	std::cout << "Please ADD or SEARCH for a contact" << std::endl;
	std::cout << "You can also EXIT (all data will be lost)" << std::endl;
}

int	main(void)
{
	std::string input;
	PhoneBook phonebook;
	Contact contact;
	int	index = 42;
	show_instructions();
	while (std::getline(std::cin, input))
	{
		if (!input.compare("ADD"))
			phonebook.add_contact(contact, phonebook);
		else if (!input.compare("SEARCH"))
		{
			if (phonebook.index == -1)
			{
				std::cout << "Can not display an empty phonebook, please ADD contacts first" << std::endl;
				continue ; 
			}
			phonebook.display_contacts(contact, phonebook);
			std::cout << "Please input the index of the contact you wish to display" << std::endl;
			std::getline(std::cin, input);
			try{
				index = std::stoi(input);
				if (index <= phonebook.index && index >= 0)
					phonebook.display_specific_contact(contact, phonebook, index);
				else
					std::cout << "invalid index please try to SEARCH again" << std::endl;}
			catch (std::invalid_argument){
				std::cout << "invalid index please try to SEARCH again" << std::endl;
			}
		}
		else if (!input.compare("EXIT"))
			break ;	
		else
			std::cout << "Incorrect option, Please Use ADD, SEARCH, OR EXIT" <<std::endl;
	}
	return (0);
}
