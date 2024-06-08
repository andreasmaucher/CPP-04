/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/06/08 17:43:23 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP

# define BRAIN_HPP

#include <iostream>
#include <string>
#include <fstream>

class Brain
{
	protected:
		std::string _ideas[100];
	
	public:
		// Default constructor
		Brain(void);
		// Copy constructor
		Brain(Brain const &src);
		// Copy assignment operator
		Brain &operator=(Brain const &others);
		// Destructor
		~Brain(void);
};

#endif
