/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/06/08 18:58:07 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void) : Animal("Dog")
{
	this->_brain = new Brain();
    std::cout << this->_type << " constructor called" << std::endl;
}

Dog::Dog(Dog const & src)
{
  std::cout << "Dog copy constructor called" << std::endl;
  *this = src;
  return ;
}

Dog &Dog::operator=(Dog const &other)
{
    if (this != &other)
	{
      this->_type = other.getType();
      this->_brain = new Brain(*other._brain);
    }
  std::cout << "Dog copy assignment operator called" << std::endl;
  return *this;
}

Dog::~Dog(void)
{
	delete this->_brain;
    std::cout << this->_type << " destructor called" << std::endl;
}

void	Dog::makeSound( void ) const
{
    std::cout << "Woof woof!" << std::endl;
}