/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/06/08 18:42:31 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP

# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

/* this derived Cat class inherits from Animal */

class Cat : public Animal
{
	private:
		Brain *_brain;
	
	public:
		Cat(void);
		Cat (Cat const &src);
        Cat &operator=(Cat const &other);
		~Cat(void);
		
		void	makeSound(void) const;
};

#endif
