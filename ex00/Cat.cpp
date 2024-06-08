/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/06/08 17:08:09 by amaucher         ###   ########.fr       */
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