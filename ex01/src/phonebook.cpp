/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 15:25:16 by lylrandr          #+#    #+#             */
/*   Updated: 2025/07/02 16:50:19 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../phonebook.hpp"

PhoneBook::PhoneBook() : _index(0), _count(0){
	std::cout << "Phonebook constructor called" << std::endl;
}

PhoneBook::~PhoneBook(){
	std::cout << "Phonebook destructor called" << std::endl;
}

// print tableau contact
void	PhoneBook::print_phonebook(){
	if (_count == 0){
		std::cout << "No contact registered." << std::endl;
		return;
	}
	std::cout << "     Index|First Name| Last Name|  Nickname|" << std::endl;
	for (int i = 0; i < _count; ++i) {
		std::cout << "         " << i << '|';
		_tab[i].print_tab_contact();
	}
	std::string input;
	int idx = -1;
	std::cout << "Enter the index of the contact you wish to see : ";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	while (true) {
		if (!std::getline(std::cin, input)) {
			std::cout << "Input error. Aborting." << std::endl;
			return;
		}
		if (input.empty() || input.length() > 1 || !std::isdigit(input[0])) {
			std::cout << "Enter a valid index : ";
			continue;
		}
		idx = input[0] - '0';

		if (idx < 0 || idx >= _count) {
			std::cout << "Enter a valid index : ";
			continue;
		}
		break;
	}
	_tab[idx].print_contact();
}


// ajoute contact
void PhoneBook::add_contact() {
	_tab[_index].add_contact();
	_index = (_index + 1) % 8;
	if (_count < 8)
		_count++;
}
