/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/06/23 16:49:55 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

/*
To instantiate a class means to create an object (or instance) of that class
e.g. Animal cat; // Instantiating an Animal object named cat
*/

int main()
{
	// test that 'Animal' class is non-instantiable by attempting to create an
	// instance of it directly; not possible because of purely virtual destructor
	// Animal a; // This line will result in a compilation error
    const Animal* j = new Dog();
	const Animal* i = new Cat();
	
    delete  j;
    delete  i;

	std::cout << "-----" << std::endl;
	Dog basic;
    {
        Dog tmp = basic;
    }
	
	std::cout << "-----" << std::endl;
    const Animal* animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
    for (int i = 0; i < 4; i++) 
	{
        delete animals[i];
    }
	
	return 0;
}
