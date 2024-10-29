/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 23:55:29 by egomez            #+#    #+#             */
/*   Updated: 2024/10/17 23:55:30 by egomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

Contact Contact::ask() {
	Contact	tmp;

	while (tmp.firstname.empty()){
		std::cout << "First Name :" << std::endl;
		std::getline(std::cin, tmp.firstname);
	}
	while (tmp.lastname.empty()) {
		std::cout << "Last Name :" << std::endl;
		std::getline(std::cin, tmp.lastname);
	}
	while (tmp.nickname.empty()) {
		std::cout << "Nickname :" << std::endl;
		std::getline(std::cin, tmp.nickname);
	}
	if (tmp.number.empty()) {
		std::cout << "Number :" << std::endl;
		std::getline(std::cin, tmp.number);
	}
	if (tmp.secret.empty()) {
		std::cout << "Darkest Secret :" << std::endl;
		std::getline(std::cin, tmp.secret);
	}
	return tmp;
}

void Contact::print_contact(Contact contact) {
	std::cout<< "First Name : "<< contact.firstname<< std::endl;
	std::cout<< "Last Name : "<< contact.lastname<< std::endl;
	std::cout<< "Nickname : "<< contact.nickname<< std::endl;
	std::cout<< "Number : "<< contact.number<< std::endl;
	std::cout<< "Darkest Secret : "<< contact.secret<< std::endl;
}

void Contact::trunc(std::string str) {
	if (10 - (int)str.size() >= 0)
	{
		for(int len = 10 - (int)str.size(); len>0; len--)
			std::cout<< " ";
		std::cout<< str;
	}
	else
	{
		for (int i = 0; i < 9; i++)
			std::cout<< str[i];
		std::cout<< ".";
	}
}

void Contact::display(Contact *repertoire, int max) {
	for (int i=0; i<max; i++)
	{
		std::cout<< "         "<< i<< "|";
		trunc(repertoire[i].firstname);
		std::cout<< "|";
		trunc(repertoire[i].lastname);
		std::cout<< "|";
		trunc(repertoire[i].nickname);
		std::cout<< std::endl;
	}
}
