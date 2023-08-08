/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:52:27 by orakib            #+#    #+#             */
/*   Updated: 2023/08/06 16:49:30 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void) {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	
	const WrongAnimal* Wmeta = new WrongAnimal();
	const WrongAnimal* Wi = new WrongCat();
	std::cout << Wi->getType() << " " << std::endl;
	Wi->makeSound(); //will output the animal sound!
	Wmeta->makeSound();
	delete Wmeta;
	delete Wi;
	return 0;
}