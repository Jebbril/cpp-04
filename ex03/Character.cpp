/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:43:15 by orakib            #+#    #+#             */
/*   Updated: 2023/08/07 18:38:08 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : ICharacter() {
	this->name = "";
	this->inv[0] = 0;
	this->inv[1] = 0;
	this->inv[2] = 0;
	this->inv[3] = 0;
}

Character::Character(std::string const &name) : ICharacter() {
	this->name = name;
	this->inv[0] = 0;
	this->inv[1] = 0;
	this->inv[2] = 0;
	this->inv[3] = 0;
}

Character::Character(const Character &object) : ICharacter() {
	this->name = object.name;
	this->inv[0] = object.inv[0]->clone();
	this->inv[1] = object.inv[1]->clone();
	this->inv[2] = object.inv[2]->clone();
	this->inv[3] = object.inv[3]->clone();
}

Character	&Character::operator=(const Character &object) {
	if (this != &object) {
		this->name = object.name;
		if (inv[0])
			delete inv[0];
		this->inv[0] = object.inv[0]->clone();
		if (inv[1])
			delete inv[1];
		this->inv[1] = object.inv[1]->clone();
		if (inv[2])
			delete inv[2];
		this->inv[2] = object.inv[2]->clone();
		if (inv[3])
			delete inv[3];
		this->inv[3] = object.inv[3]->clone();
	}
	return (*this);
}
Character::~Character() {
	if (this->inv[0])
		delete this->inv[0];
	if (this->inv[1])
		delete this->inv[1];
	if (this->inv[2])
		delete this->inv[2];
	if (this->inv[3])
		delete this->inv[3];
}
	
std::string const	&Character::getName() const {
	return (this->name);
}

void	Character::equip(AMateria *m) {
	int	i = 0;

	while (this->inv[i])
		i++;
	if (i < 4)
		this->inv[i] = m;
}
void	Character::unequip(int idx) {
	if (idx < 4 && this->inv[idx])
		this->inv[idx] = 0;
}
void	Character::use(int idx, ICharacter &target) {
	if (idx < 4 && this->inv[idx])
		this->inv[idx]->use(target);
}