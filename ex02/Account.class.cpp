/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla </var/spool/mail/roblabla>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/15 09:03:10 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/15 09:39:45 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.class.hpp"

Account::Account(int initial_deposit) :
	_accountIndex(_nbAccounts++), _amount(initial_deposit), _nbDeposits(0),
	_nbWithdrawals(0)
{
	Account::_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";amount:" << _amount
				<< ";created" << std::endl;
}

Account::~Account()
{
	Account::_totalAmount -= _amount;
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";amount:" << _amount
				<< ";closed" << std::endl;
}

int		Account::getNbAccounts()
{
	return (_nbAccounts);
}

int		Account::getTotalAmount()
{
	return (_totalAmount);
}

int		Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int		Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout	<< "accounts:" << _nbAccounts << ";total:" << _totalAmount
				<< ";deposits:" << _totalNbDeposits << ";withdrawals:"
				<< _totalNbWithdrawals << std::endl;
}

void	Account::_displayTimestamp()
{
	char		str[256];
	time_t		rawtime;
	struct tm	*timeinfo;

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(str, 256, "%Y%m%d_%H%M%S", timeinfo);
	std::cout << "[" << str << "] ";
}

void	Account::makeDeposit(int deposit)
{
	int	p_amount = _amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";p_amount:" << p_amount
				<< ";deposit:" << deposit << ";amount:" << _amount
				<< ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int	p_amount = _amount;
	if (this->_amount >= withdrawal)
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		_displayTimestamp();
		std::cout	<< "index:" << _accountIndex << ";p_amount:" << p_amount
					<< ";withdrawal:" << withdrawal << ";amount:"
					<< this->_amount << ";nb_withdrawals:" << _nbWithdrawals
					<< std::endl;
		return (true);
	}
	else
	{
		_displayTimestamp();
		std::cout	<< "index:" << _accountIndex << ";p_amount:" << p_amount
					<< ";withdrawal:refused" << std::endl;
		return (false);
	}
}

int		Account::checkAmount() const
{
	return (this->_amount);
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";amount:" << _amount
				<< ";deposits:" << _nbDeposits << ";withdrawals:"
				<< _nbWithdrawals << std::endl;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
