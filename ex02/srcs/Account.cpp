/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:20:22 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/05 19:55:29 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Account.hpp"
#include <iostream>
#include <chrono>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbWithdrawals = 0;
int	Account::_totalNbDeposits= 0;
Account::Account(int initial_deposit): _amount(initial_deposit), _nbDeposits(0)
{
	_displayTimestamp();
	static int l_index;
	_accountIndex = l_index;
	_totalAmount += initial_deposit;
//	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:"<<_amount <<";created" << std::endl;
	l_index++;
//	_accountIndex += 1;
	_nbAccounts += 1;
	if (l_index == 8)
		l_index %= 8;
}
Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:"<<_amount <<";closed" << std::endl;
}
void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:"
		<< deposit;
	_totalAmount += deposit;
	_amount += deposit;
	_nbDeposits += 1;
	_totalNbDeposits +=1;
	std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
	<< ";withdrawal:";
	if (_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (0);
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals += 1;
	_totalNbWithdrawals += 1;
	std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals
	<<	std::endl;
	return (1);
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

int	Account::getNbAccounts()
{
	return (Account::_nbAccounts);
}

int	Account::getNbDeposits()
{
	return (Account::_totalNbDeposits);
}

 int	Account::getNbWithdrawals()
{
	return (Account::_totalNbWithdrawals);
}

int	Account::getTotalAmount()
{
	return (Account::_totalAmount);
}
void	Account::_displayTimestamp()
{
	//std::cout << "[19920104_091532] ";
	//uncomment above line and comment out real timestamp to run diff on logfiles
	time_t stamp = time(NULL);
	tm	*fmt = std::localtime(&stamp);
	std::cout << "[" << fmt->tm_year + 1900;
	if (fmt->tm_mon < 10)
		std::cout << '0';
	std::cout << fmt->tm_mon;
	if (fmt->tm_mday < 10)
		std::cout << '0';
	std::cout << fmt->tm_mday;
	std::cout << '_';
	if (fmt->tm_hour < 10)
		std::cout << '0';
	std::cout << fmt->tm_hour;
	if (fmt->tm_min < 10)
		std::cout << '0';
	std::cout << fmt->tm_min;
	if (fmt->tm_sec < 10)
		std::cout << '0';
	std::cout << fmt->tm_sec << "]";

}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
		<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals
		<< std::endl;
}
void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:"<< getNbAccounts() << ";total:" << getTotalAmount()
		<< ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals()
		<< std::endl;
}
