/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/06/19 17:24:55 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

# define DOG_HPP

#include "Animal.hpp"

/* this derived Dog class inherits from Animal */

class Dog : public Animal
{
	private:
	
	public:
		Dog(void);
		// Copy constructor (create a new object as a copy of an existing one)
		Dog(const Dog &other);
		// Copy assignment operator
		Dog& operator=(const Dog &other);
		~Dog(void);
		
		void	makeSound(void) const;
};

#endif
