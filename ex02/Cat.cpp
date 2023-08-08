/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:54:28 by orakib            #+#    #+#             */
/*   Updated: 2023/08/06 18:19:19 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->CatBrain = new Brain();
}

Cat::Cat(const Cat &object) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = object.type;
	this->CatBrain = new Brain(*this->CatBrain);
}

Cat	&Cat::operator=(const Cat &object) {
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &object) {
		this->type = object.type;
		this->CatBrain = new Brain(*this->CatBrain);
	}
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete CatBrain;
}

void	Cat::makeSound() const {
	std::cout << "Cat meows" << std::endl;
}