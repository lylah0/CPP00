/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 15:25:16 by lylrandr          #+#    #+#             */
/*   Updated: 2025/06/24 17:03:49 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	<cctype>

int	main (int ac, char **av) {

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else {
		std::string input = av[1];
		for (size_t i = 0; i < input.length(); i++)
			std::cout << (char)toupper(input[i]);
	}
	std::cout << std::endl;
	return 0;
}
