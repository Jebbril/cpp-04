/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:53:08 by orakib            #+#    #+#             */
/*   Updated: 2023/08/06 15:59:00 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal default constructor called" << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal &object) {
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = object.type;
}

Animal	&Animal::operator=(const Animal &object) {
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &object) {
		this->type = object.type;
	}
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

void	Animal::makeSound() const {
	std::cout << "Animal makes generic sound" << std::endl;
}

std::string	Animal::getType(void) const {
	return (this->type);
}