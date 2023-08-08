/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 17:29:17 by orakib            #+#    #+#             */
/*   Updated: 2023/08/06 18:10:59 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H

#define BRAIN_H

#include <iostream>
#include <string>

class	Brain {
	private:
		std::string	ideas[100];
	public:
		Brain();
		Brain(const Brain &object);
		Brain	&operator=(const Brain &object);
		~Brain();
};

#endif