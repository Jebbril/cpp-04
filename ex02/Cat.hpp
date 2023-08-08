/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:54:36 by orakib            #+#    #+#             */
/*   Updated: 2023/08/06 18:01:21 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H

#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal {
	private:
		Brain	*CatBrain;
	public:
		Cat();
		Cat(const Cat &object);
		Cat	&operator=(const Cat &object);
		~Cat();
		void	makeSound() const;

};

#endif