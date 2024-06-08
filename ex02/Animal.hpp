/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/06/08 19:20:38 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

# define ANIMAL_HPP

#include <iostream>
#include <string>
#include <fstream>

/*
Instantiable class:
	- objects can be created from it
To make a class non-instantiable a pure virtual destructor can be used.
*/

class Animal
{
	protected:
		std::string _type;
	
	public:
		// Default constructor
		Animal(void);
		// Parameterized constructor (like default, but with specific type, convenient
		// for quickly creating object with a specific initial state)
		Animal(std::string type);
		// Copy constructor (create a new object as a copy of an existing one)
		Animal(const Animal &other);
		// Copy assignment operator
		Animal& operator=(const Animal &other);
		// Destructor (purely virtual)
		virtual ~Animal(void) = 0;
		
		// virtual function: function in a base class that is expected to be overridden by derived classes
		virtual void makeSound(void) const;
		std::string getType(void) const;
};

#endif
