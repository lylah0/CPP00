/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:36:27 by lylrandr          #+#    #+#             */
/*   Updated: 2025/06/26 18:46:26 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../phonebook.hpp"

int	main(){
	while(1){
		std::string input;
			std::cin >> input;
			if (input == "ADD" || input == "SEARCH" || input == "EXIT")
			{
				PhoneBook	objet;
				Contact		contact;
				if (input == "ADD")
					contact.add_contact();
				else if (input == "SEARCH")
					objet.print_phonebook();
				else if (input == "EXIT")
					objet.exit_prog();
			}
	}
	return (0);
}
