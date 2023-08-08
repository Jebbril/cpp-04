/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:11:03 by orakib            #+#    #+#             */
/*   Updated: 2023/08/07 16:35:15 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria() {
	this->type = "ice";
}

Ice::Ice(std::string const &type) : AMateria(type) {
	this->type = type;
}

Ice::Ice(Ice const &object) : AMateria(object.type) {
	this->type = object.type;
}

Ice	&Ice::operator=(Ice const &object) {
	if (this != &object) {
		this->type = object.type;
	}
	return (*this);
}

Ice::~Ice() {
	
}
		
		
Ice	*Ice::clone() const {
	Ice	*ret = new Ice(this->type);
	return (ret);
}

void	Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
}