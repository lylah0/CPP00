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

void	PhoneBook::print_phonebook(){
	int	idx;
	std::cout << "Index     |First Name| Last Name|  Nickname|" << std::endl;
	for (int i = 0; i < _count; ++i) {
		std::cout << "         " << i << '|';
		_tab[i].print_tab_contact();
	}
	std::cout << "Enter the index of the contact you wish to see :"; std::cin >> idx ;
	while (1){
		if (idx > _index || isdigit(idx)) {
			std::cout << "Enter a valid index :"; std::cin >> idx;
		}
		else if (idx < _index){
	 		break;
		}
	}
	_tab[idx].print_contact();
}

void PhoneBook::add_contact() {
	_tab[_index].add_contact();
	_index = (_index + 1) % 8;
	if (_count < 8)
		_count++;
}

void	PhoneBook::exit_prog(){
	PhoneBook::~PhoneBook();
	// Contact::~Contact();
	exit(0);
}


