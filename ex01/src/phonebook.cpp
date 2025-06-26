/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 15:25:16 by lylrandr          #+#    #+#             */
/*   Updated: 2025/06/26 20:00:26 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../phonebook.hpp"

PhoneBook::PhoneBook(){
	std::cout << "Phonebook constructor called" << std::endl;
}

PhoneBook::~PhoneBook(){
	std::cout << "Phonebook destructor called" << std::endl;
}

void	PhoneBook::print_phonebook(){
	std::cout << _index << "         |";
	// std::cout << contact_info._FirstName;
}

void	PhoneBook::exit_prog(){
	PhoneBook::~PhoneBook();
	// Contact::~Contact();
	exit(0);
}


