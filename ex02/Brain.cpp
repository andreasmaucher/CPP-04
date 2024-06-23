/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/06/23 16:47:11 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Default constructor
Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

// Copy constructor: initializes a new 'Brain' object as a copy of an existing object
Brain::Brain(Brain const& src)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
	return ;
}

// Copy assignment operator: Copies the state of an existing Brain object to another existing object
Brain& Brain::operator=(Brain const & other)
{
    std::cout << "Brain assignment operator called" << std::endl;
    if (this != &other)
	{
		for (int i = 0; i < 100; i++)
		{
			this->_ideas[i] = other._ideas[i];
		}
    }
    return *this;
}

// Destructor
Brain::~Brain(void)
{
    std::cout << "Brain destructor called" << std::endl;
}
