/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:54:36 by orakib            #+#    #+#             */
/*   Updated: 2023/08/06 15:48:37 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H

#define CAT_H

#include "Animal.hpp"

class	Cat : public Animal {
	private:
	public:
		Cat();
		Cat(const Cat &object);
		Cat	&operator=(const Cat &object);
		~Cat();
		void	makeSound() const;

};

#endif