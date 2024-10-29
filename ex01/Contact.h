/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 00:16:27 by egomez            #+#    #+#             */
/*   Updated: 2024/10/18 00:16:27 by egomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

class Contact
{
public:
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string number;
	std::string secret;

public:
	static Contact ask();
	static void display(Contact *repertoire, int max);
	static void print_contact(Contact contact);

private:
	static void trunc(std::string str);
};

#endif