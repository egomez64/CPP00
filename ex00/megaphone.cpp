/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 22:34:43 by egomez            #+#    #+#             */
/*   Updated: 2024/10/17 22:34:45 by egomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	if (ac>1)
	{
		for (int i = 1; av[i]; i++) {
			std::string str(av[i]);
			for (std::string::iterator it = str.begin(); it != str.end(); it++)
				std::cout << (char) toupper(*it);
		}
		std::cout << std::endl;
	}
	else
		std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
}
