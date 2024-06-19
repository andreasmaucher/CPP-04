/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/06/19 17:26:40 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

/* this derived WrongCat class inherits from WrongAnimal */

class WrongCat : public WrongAnimal
{
	private:

	public:
		WrongCat(void);
		// Copy constructor (create a new object as a copy of an existing one)
		WrongCat(const WrongCat &other);
		// Copy assignment operator
		WrongCat& operator=(const WrongCat &other);
		~WrongCat(void);

		void	makeSound(void) const;
};

#endif
