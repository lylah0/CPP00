/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:36:59 by lylrandr          #+#    #+#             */
/*   Updated: 2025/07/02 16:26:17 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_HPP
#define	PHONEBOOK_HPP

# include	<iostream>
# include	<string>
# include	<string.h>
# include	<stdlib.h>
# include	<ctype.h>
# include	"contact.hpp"

class PhoneBook {
	private:
		Contact	_tab[8];
		int	_index;
		int	_count;
	public:
		PhoneBook();
		~PhoneBook();
		void	print_phonebook();
		void	exit_prog();
		void	print_contact();
		void	add_contact();
};

#endif
