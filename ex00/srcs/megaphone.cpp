/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 03:19:55 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/05 22:22:05 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
int	main(int argc, char **argv)
{
	std::string str;

	if (argc == 1)
		std::cout << " * LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; argv[i]; i++)
	{
		std::string str = argv[i];
		for (int k = str.length(); k >= 0 ; k--)
				str[k] = toupper(str[k]);
		std::cout << str;
	}
	std::cout << std::endl;
	return (0);
}
