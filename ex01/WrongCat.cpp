/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:55:30 by orakib            #+#    #+#             */
/*   Updated: 2023/08/06 14:59:28 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &object) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->type = object.type;
}

WrongCat	&WrongCat::operator=(const WrongCat &object) {
	std::cout << "WrongCat assignment operator called" << std::endl;
	if (this != &object) {
		this->type = object.type;
	}
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << "WrongCat meows" << std::endl;
}