/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/06/08 17:14:45 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Default constructor
WrongAnimal::WrongAnimal(void) : _type("Wrong Animal")
{
    std::cout << this->_type << " constructor called" << std::endl;
}

// Parameterized constructor: initializes an animal object class with a specific type
WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
    std::cout << "Wrong Animal " << this->_type << " constructor called" << std::endl;
}

// Destructor
WrongAnimal::~WrongAnimal(void)
{
    std::cout << "Wrong Animal destructor called" << std::endl;
}

// Copy constructor: initializes a new 'Animal' object as a copy of an existing object
WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
    std::cout << "Wrong Animal copy constructor called" << std::endl;
    *this = src;
}

// Copy assignment operator
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "Wrong Animal assignment operator called" << std::endl;
    if (this != &other)
	{
        this->_type = other._type;
    }
    return *this;
}

// A virtual function meant to be overridden by derived classes
void WrongAnimal::makeSound(void) const
{
    std::cout << "Wrong Animal makeSound function called" << std::endl;
}

// returns the _type member variable, in this case the type of the animal
std::string		WrongAnimal::getType(void) const
{
    return this->_type;
}