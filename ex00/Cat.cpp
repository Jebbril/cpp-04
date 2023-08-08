/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:54:28 by orakib            #+#    #+#             */
/*   Updated: 2023/08/06 15:59:06 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &object) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = object.type;
}

Cat	&Cat::operator=(const Cat &object) {
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &object) {
		this->type = object.type;
	}
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Cat meows" << std::endl;
}