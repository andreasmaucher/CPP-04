/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/06/19 17:20:23 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

# define ANIMAL_HPP

#include <iostream>
#include <string>
#include <fstream>

/*
Subtype polymorphism:
- allows a function to process objects of different types through a single interface
Abstract classes:
- can not be instantiated and often used as base class
Protected classes:
- balance between public & private classes, allowes derived classes to access
certain members while keeping them hidden from the outside world
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
		// Destructor (in this case no dynamically allocated resources)
		virtual ~Animal(void);
	
		// virtual function: function in a base class that is expected to be overridden by derived classes
		virtual void makeSound(void) const;
		std::string getType(void) const;
};

#endif
