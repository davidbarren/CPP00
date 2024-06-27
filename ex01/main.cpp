/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 03:57:30 by dbarrene          #+#    #+#             */
/*   Updated: 2024/06/27 04:01:57 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

std::string	truncate(std::string& str)
{
	if (str.length() > 10)
	{
		str = str.substr(0, 10);
		str[9] = '.';
	}
		return (str);
}

int	main(void)
{
	std::string input;
	PhoneBook phonebook;
	while (getline(std::cin, input))
	{
//		if (!input.compare("TRUNCATE THIS STRING PLEASE"))
//		{
//			truncate(input);
//			std::cout << input << std::endl;
//		}
		if (!input.compare("ADD"))
			std::cout << "Add function here" << std::endl;
		else if (!input.compare("SEARCH"))
			std::cout << "Search function here" << std::endl;
		else if (!input.compare("EXIT"))
			break ;	
		else
			std::cout << "Incorrect option, Please Use ADD, SEARCH, OR EXIT" <<std::endl;
	}
	return (0);
}
