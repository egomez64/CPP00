/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 23:55:50 by egomez            #+#    #+#             */
/*   Updated: 2024/10/17 23:55:50 by egomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include "Contact.h"

class PhoneBook
{
private:
	int	_i;
	int	_nb_contact;

public:
	Contact repertoire[8];
	PhoneBook(int i);
	void add(Contact contact);
	void search();
};

#endif
