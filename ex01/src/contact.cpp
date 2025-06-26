/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 18:59:36 by lylrandr          #+#    #+#             */
/*   Updated: 2025/06/26 20:17:49 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../contact.hpp"

Contact::Contact(){
	std::cout << "Contact constructor called" << std::endl;
}

Contact::~Contact(){
	std::cout << "Contact destructor called" << std::endl;
}

void	Contact::add_contact() {
	// PhoneBook;
	// PhoneBook	test[i];

	std::cout << "First name :" << std::endl;
	std::cin >> _FirstName;
	std::cout << "Last name :" << std::endl;
	std::cin >> _LastName;
	std::cout << "Nickname :" << std::endl;
	std::cin >> _Nickname;
	std::cout << "Phone number :" << std::endl;
	std::cin >> _PhoneNumber;
	std::cout << "Darkest secret :" << std::endl;
	std::cin >> _DarkestSecret;
}
