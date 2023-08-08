/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:44:45 by orakib            #+#    #+#             */
/*   Updated: 2023/08/07 18:17:23 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource() {
	this->inv[0] = 0;
	this->inv[1] = 0;
	this->inv[2] = 0;
	this->inv[3] = 0;
	this->types[0] = "";
	this->types[1] = "";
	this->types[2] = "";
	this->types[3] = "";
}

MateriaSource::MateriaSource(const MateriaSource &object) : IMateriaSource() {
	this->inv[0] = inv[0]->clone();
	this->inv[1] = inv[1]->clone();
	this->inv[2] = inv[2]->clone();
	this->inv[3] = inv[3]->clone();
	this->types[0] = object.types[0];
	this->types[1] = object.types[1];
	this->types[2] = object.types[2];
	this->types[3] = object.types[3];
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &object) {
	if (this != &object) {
		if (inv[0])
			delete inv[0];
		this->inv[0] = inv[0]->clone();
		if (inv[1])
			delete inv[1];
		this->inv[1] = inv[1]->clone();
		if (inv[2])
			delete inv[2];
		this->inv[2] = inv[2]->clone();
		if (inv[3])
			delete inv[3];
		this->inv[3] = inv[3]->clone();
		this->types[0] = object.types[0];
		this->types[1] = object.types[1];
		this->types[2] = object.types[2];
		this->types[3] = object.types[3];
	}
	return (*this);
}

MateriaSource::~MateriaSource() {
	if (this->inv[0])
		delete this->inv[0];
	if (this->inv[1])
		delete this->inv[1];
	if (this->inv[2])
		delete this->inv[2];
	if (this->inv[3])
		delete this->inv[3];
}
		
void	MateriaSource::learnMateria(AMateria *m) {
	int	i = 0;

	while (this->inv[i])
		i++;
	if (i < 4) {
		this->inv[i] = m->clone();
		this->types[i] = m->getType();
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type) {
	int	i = 0;

	while (i < 4) {
		if (type == this->types[i])
			return (this->inv[i]->clone());
		i++;
	}
	return (0);
}