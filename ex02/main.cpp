/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:52:27 by orakib            #+#    #+#             */
/*   Updated: 2023/08/06 19:38:40 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void) {
	// Animal	test;
	const Animal** meta = new const Animal*[10];
	int	i = -1;

	while (++i < 5) {
		meta[i] = new Cat();
	}
	while (i < 10) {
		meta[i] = new Dog();
		i++;
	}
	i = -1;
	while (++i < 5) {
		delete meta[i];
	}
	while (i < 10) {
		delete meta[i];
		i++;
	}
}