/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:55:12 by orakib            #+#    #+#             */
/*   Updated: 2023/08/06 14:58:28 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H

#define WRONGCAT_H

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal {
	private:
	public:
		WrongCat();
		WrongCat(const WrongCat &object);
		WrongCat	&operator=(const WrongCat &object);
		~WrongCat();
		void	makeSound() const;
};

#endif