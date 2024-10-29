/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 01:29:29 by egomez            #+#    #+#             */
/*   Updated: 2024/10/18 01:29:30 by egomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "Contact.h"
#include "PhoneBook.h"

int main(void)
{
	std::string action;
	PhoneBook	myphone(0);
	while (1)
	{
		std::getline(std::cin, action);
		if (action == "ADD")
			myphone.add(Contact::ask());
		if (action == "SEARCH")
			myphone.search();
		if (action == "EXIT")
			exit(1);
	}
}
