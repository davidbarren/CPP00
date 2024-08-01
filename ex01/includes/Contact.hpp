/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:41:12 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/02 01:13:06 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_HPP
#define CONTACT_HPP
#include <string>
#include <iostream>

class Contact
{
	public:
		Contact ()
		{
			is_empty = 1;
			index	= -1;
		}
		~Contact()
		{
		}
		void	set_first_name(std::string& first_name);
		void	set_last_name(std::string& last_name);
		void	set_nickname(std::string& nickname);
		void	set_phone_number(std::string& phone_number);
		void	set_secret(std::string& secret);
		void	set_index(int newindex);

		std::string get_first_name();
		std::string get_last_name();
		std::string get_nickname();
		std::string get_phone_num();
		std::string get_secret();
		std::string get_index();
		int			index;
	private:
		char		is_empty;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};
#endif
