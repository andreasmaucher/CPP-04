/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/06/19 17:25:54 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
    std::cout << this->_type << " constructor called" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << this->_type << " destructor called" << std::endl;
}

void	Dog::makeSound( void ) const
{
    std::cout << "Woof woof!" << std::endl;
}

// Copy constructor: initializes a new object as a copy of an existing object
Dog::Dog(const Dog& src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
}

// Copy assignment operator: Copies the state of an existing object to another existing object
Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &other)
	{
        this->_type = other._type;
    }
    return *this;
}