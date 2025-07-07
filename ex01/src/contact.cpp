/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 18:59:36 by lylrandr          #+#    #+#             */
/*   Updated: 2025/07/02 16:48:47 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../contact.hpp"

Contact::Contact(){
	std::cout << "Contact constructor called" << std::endl;
}

Contact::~Contact(){
	std::cout << "Contact destructor called" << std::endl;
}

// print toutes les infos du contact
void	Contact::print_contact(){
	std::cout << _FirstName << std::endl;
	std::cout << _LastName << std::endl;
	std::cout << _Nickname << std::endl;
	std::cout << _PhoneNumber << std::endl;
	std::cout << _DarkestSecret << std::endl;
}

// print infos contacts dans tab
void Contact::print_tab_contact() {
	if (_FirstName.length() > 10)
		std::cout << std::setw(10) << _FirstName.substr(0, 9) + ".";  // tronqué
	else
		std::cout << std::setw(10) << _FirstName;
	std::cout << "|";
	if (_LastName.length() > 10)
		std::cout << std::setw(10) << _LastName.substr(0, 9) + ".";
	else
		std::cout << std::setw(10) << _LastName;
	std::cout << "|";
	if (_Nickname.length() > 10)
		std::cout << std::setw(10) << _Nickname.substr(0, 9) + ".";
	else
		std::cout << std::setw(10) << _Nickname;
	std::cout << "|" << std::endl;
}


// ajout d'un contact
void	Contact::add_contact() {
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
