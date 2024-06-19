/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/06/19 17:28:09 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
    std::cout << this->_type << " constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << this->_type << " destructor called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
    std::cout << "Meowwww meowwwww!" << std::endl;
}

// Copy constructor: initializes a new 'Animal' object as a copy of an existing object
WrongCat::WrongCat(const WrongCat& src)
{
    std::cout << "Wrong Cat copy constructor called" << std::endl;
    *this = src;
}

// Copy assignment operator
WrongCat& WrongCat::operator=(const WrongCat& other)
{
    std::cout << "Wrong Cat assignment operator called" << std::endl;
    if (this != &other)
	{
        this->_type = other._type;
    }
    return *this;
}