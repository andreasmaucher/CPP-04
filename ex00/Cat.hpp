/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/06/19 17:23:18 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP

# define CAT_HPP

#include "Animal.hpp"

/* this derived Cat class inherits from Animal */

class Cat : public Animal
{
	private:
	
	public:
		Cat(void);
		// Copy constructor (create a new object as a copy of an existing one)
		Cat(const Cat &other);
		// Copy assignment operator
		Cat& operator=(const Cat &other);
		~Cat(void);
		
		void	makeSound(void) const;
};

#endif
