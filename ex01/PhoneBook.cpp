/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 23:55:19 by egomez            #+#    #+#             */
/*   Updated: 2024/10/17 23:55:21 by egomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"
#include <sstream>
#include <cstdlib>

PhoneBook::PhoneBook(int i) {
	_i = i;
	_nb_contact = i;
}

void PhoneBook::add(Contact contact) {
	this->repertoire[this->_i] = contact;
	this->_i++;
	if (this->_i == 8)
		this->_i = 0;
	if (this->_nb_contact < 8)
		this->_nb_contact++;
}

void PhoneBook::search() {
	std::string index;
	int count;

	Contact::display(this->repertoire, this->_nb_contact);
	while (index.empty()) {
		std::cout << "Which contact do you want to see ?" << std::endl;
		std::getline(std::cin, index);
	}
	std::stringstream _ss(index);
	_ss >> count;
	if (_ss.fail())
		std::cerr<< "convert error form string to int"<< std::endl;
	Contact::print_contact(this->repertoire[count]);
}
