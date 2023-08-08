/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:11:27 by orakib            #+#    #+#             */
/*   Updated: 2023/08/07 18:45:54 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria() {
	this->type = "cure";
}

Cure::Cure(std::string const &type) : AMateria(type) {
	this->type = type;
}

Cure::Cure(Cure const &object) : AMateria(object.type) {
	this->type = object.type;
}

Cure	&Cure::operator=(Cure const &object) {
	if (this != &object) {
		this->type = object.type;
	}
	return (*this);
}

Cure::~Cure() {
	
}
		
		
Cure	*Cure::clone() const {
	Cure	*ret = new Cure(this->type);
	return (ret);
}

void	Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}