/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:37:01 by orakib            #+#    #+#             */
/*   Updated: 2023/08/07 18:36:54 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	this->type = "";
}

AMateria::AMateria(std::string const &type) {
	this->type = type;
}

AMateria::AMateria(AMateria const &object) {
		this->type = object.type;
}

AMateria	&AMateria::operator=(AMateria const &object) {
	if (this != &object) {
		this->type = object.type;
	}
	return (*this);
}

AMateria::~AMateria() {
	
}

std::string const	&AMateria::getType() const {
	return (this->type);
}

void	AMateria::use(ICharacter &target) {
	(void)target;
}