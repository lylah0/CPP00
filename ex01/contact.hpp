/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 19:53:10 by lylrandr          #+#    #+#             */
/*   Updated: 2025/06/26 19:54:39 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "phonebook.hpp"

class Contact{
	private:
		std::string	_FirstName;
		std::string	_LastName;
		std::string	_Nickname;
		std::string	_PhoneNumber;
		std::string	_DarkestSecret;
	public:
		Contact();
		~Contact();
		void	add_contact();
};
