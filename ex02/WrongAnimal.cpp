/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:55:00 by orakib            #+#    #+#             */
/*   Updated: 2023/08/06 14:54:27 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal default constructor called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &object) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	this->type = object.type;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &object) {
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	if (this != &object) {
		this->type = object.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void	WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal makes generic sound" << std::endl;
}

std::string	WrongAnimal::getType(void) const {
	return (this->type);
}