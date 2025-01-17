/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:41:04 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/06 15:29:38 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"


Contact::Contact():index(-1){
}

Contact::~Contact(){
}

void	Contact::set_first_name(std::string& first_name)
{
	this->first_name = first_name;
}
void	Contact::set_last_name(std::string& last_name)
{
	this->last_name = last_name;
}

void	Contact::set_nickname(std::string& nickname)
{
	this->nickname = nickname;
}
void	Contact::set_index(int newindex)
{
	this->index = newindex;
}
void	Contact::set_phone_number(std::string& phone_number)
{
	this->phone_number = phone_number;
}
void	Contact::set_secret(std::string& secret)
{
	this->darkest_secret = secret;
}

std::string	Contact::get_first_name()
{
	return (this->first_name);
}
std::string	Contact::get_last_name()
{
	return (this->last_name);
}
std::string	Contact::get_nickname()
{
	return (this->nickname);
}
std::string	Contact::get_phone_num()
{
	return (this->phone_number);
}
std::string	Contact::get_secret()
{
	return (this->darkest_secret);
}
std::string Contact::get_index()
{
	return (std::to_string(this->index));
}
