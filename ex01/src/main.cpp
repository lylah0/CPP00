/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:36:27 by lylrandr          #+#    #+#             */
/*   Updated: 2025/07/02 16:06:50 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../phonebook.hpp"

int	main(){
	PhoneBook	objet;
	std::string input;
	while(1){
		std::cout << "Enter a cmd : ";
			std::cin >> input;
			if (input == "ADD" || input == "SEARCH" || input == "EXIT")
			{
				if (input == "ADD")
					objet.add_contact();
				else if (input == "SEARCH")
					objet.print_phonebook();
				else if (input == "EXIT") {
					break;
				}
			}
	}
	return (0);
}
