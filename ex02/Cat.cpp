/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/06/08 18:41:46 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void) : Animal("Cat")
{
	this->_brain = new Brain();
    std::cout << this->_type << " constructor called" << std::endl;
}

Cat::Cat(Cat const & src)
{
  std::cout << "Cat copy constructor called" << std::endl;
  *this = src;
  return ;
}

Cat &Cat::operator=(Cat const &other)
{
    if (this != &other)
	{
      this->_type = other.getType();
      this->_brain = new Brain(*other._brain);
    }
  std::cout << "Cat copy assignment operator called" << std::endl;
  return *this;
}

Cat::~Cat(void)
{
	delete this->_brain;
    std::cout << this->_type << " destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
    std::cout << "Meowwwww meowwwwww!" << std::endl;
}