/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:54:20 by orakib            #+#    #+#             */
/*   Updated: 2023/08/06 18:19:56 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->DogBrain = new Brain();
}

Dog::Dog(const Dog &object) {
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = object.type;
	this->DogBrain = new Brain(*this->DogBrain);
}

Dog	&Dog::operator=(const Dog &object) {
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &object) {
		this->type = object.type;
		this->DogBrain = new Brain(*this->DogBrain);
	}
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete DogBrain;
}

void	Dog::makeSound() const {
	std::cout << "Dog barks" << std::endl;
}