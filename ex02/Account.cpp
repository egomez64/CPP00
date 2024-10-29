/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:39:50 by egomez            #+#    #+#             */
/*   Updated: 2024/10/24 15:39:52 by egomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

Account::Account(int initial_deposit) {
	_nbAccounts++;
	this->_accountIndex = _nbAccounts - 1;
	this->_amount = initial_deposit;
	_totalAmount += _amount;
}

void	Account::makeDeposit(int deposit) {
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal) {
	if (this->_amount - withdrawal > 0){
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		return (true);
	}
	return (false);
}

int Account::checkAmount() const {
	return (this->_amount);
}

int Account::getNbAccounts() {
	return (_nbAccounts);
}

int Account::getNbDeposits() {
	return (_totalNbDeposits);
}

int Account::getTotalAmount() {
	return(_totalAmount);
}

int Account::getNbWithdrawals() {
	return(_totalNbWithdrawals);
}

void	Account::displayStatus() const {

}
