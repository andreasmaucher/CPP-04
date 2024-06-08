/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/06/08 18:39:15 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Polymorphism:
- the ability of objects to take on multiple forms
- allows objects of different classes to be treated as objects
of a common base class
*/

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
    delete  j;
    delete  i;

	Dog basic;
    {
        Dog tmp = basic;
    }

    const Animal* animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
    for (int i = 0; i < 4; i++) 
	{
		std::cout << "delete" << i << std::endl;
        delete animals[i];
    }

    return 0;
}
