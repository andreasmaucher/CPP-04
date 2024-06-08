/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/06/08 18:44:19 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

/* this derived Dog class inherits from Animal */

class Dog : public Animal
{
	private:
		Brain *_brain;
	
	public:
		Dog(void);
		Dog (Dog const &src);
        Dog &operator=(Dog const &other);
		~Dog(void);
		
		void	makeSound(void) const;
};

#endif
