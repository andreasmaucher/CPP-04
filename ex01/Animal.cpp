/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/06/23 16:27:27 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Default constructor
Animal::Animal(void) : _type("Animal")
{
    std::cout << this->_type << " constructor called" << std::endl;
}

// Parameterized constructor: initializes an animal object class with a specific type
Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal " << this->_type << " constructor called" << std::endl;
}

// Destructor
Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}

// Copy constructor: initializes a new 'Animal' object as a copy of an existing object
Animal::Animal(const Animal& src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

// Copy assignment operator: Copies the state of an existing Animal object to another existing object
Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Animal assignment operator called" << std::endl;
    if (this != &other)
	{
        this->_type = other._type;
    }
    return *this;
}

// A virtual function meant to be overridden by derived classes
void Animal::makeSound(void) const
{
    std::cout << "Animal makeSound function called" << std::endl;
}

// returns the _type member variable, in this case the type of the animal
std::string	Animal::getType(void) const
{
    return this->_type;
}