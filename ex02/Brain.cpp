/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 17:29:25 by orakib            #+#    #+#             */
/*   Updated: 2023/08/06 18:17:39 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &object) {
	std::cout << "Brain copy constructor called" << std::endl;
	int	i = -1;
	while (++i < 100) {
		this->ideas[i] = object.ideas[i];
	}
}

Brain	&Brain::operator=(const Brain &object) {
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &object) {
		int	i = -1;
		while (++i < 100) {
			this->ideas[i] = object.ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}