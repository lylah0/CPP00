/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:36:59 by lylrandr          #+#    #+#             */
/*   Updated: 2025/06/27 16:49:25 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_HPP
#define	PHONEBOOK_HPP

# include	<iostream>
# include	<string>
# include	<string.h>
# include	<stdlib.h>
# include	"contact.hpp"

class PhoneBook {
	private:
		Contact	_tab[8];
		int	_index;
	public:
		PhoneBook();
		~PhoneBook();
		void	print_phonebook();
		void	exit_prog();
		void	add_contact();
};

#endif
