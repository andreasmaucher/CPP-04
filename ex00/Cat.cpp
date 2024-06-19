/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/06/19 17:24:15 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << this->_type << " constructor called" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << this->_type << " destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
    std::cout << "Meowwwww meowwwwww!" << std::endl;
}

// Copy constructor: initializes a new object as a copy of an existing object
Cat::Cat(const Cat& src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
}

// Copy assignment operator: Copies the state of an existing object to another existing object
Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &other)
	{
        this->_type = other._type;
    }
    return *this;
}