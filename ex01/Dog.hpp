/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:54:14 by orakib            #+#    #+#             */
/*   Updated: 2023/08/06 18:01:40 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H

#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal {
	private:
		Brain	*DogBrain;
	public:
		Dog();
		Dog(const Dog &object);
		Dog	&operator=(const Dog &object);
		~Dog();
		void	makeSound() const;
};

#endif