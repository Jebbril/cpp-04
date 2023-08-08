/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 19:54:32 by orakib            #+#    #+#             */
/*   Updated: 2023/08/08 15:35:39 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	
	std::cout << std::endl << std::endl;
	
	IMateriaSource* src1 = new MateriaSource();
	AMateria* IceSample = new Ice();
	AMateria* CureSample = new Cure();
	src1->learnMateria(IceSample);
	src1->learnMateria(CureSample);
	ICharacter* him = new Character("him");
	AMateria* IceInstance = src1->createMateria("ice");
	AMateria* CureInstance = src1->createMateria("cure");
	him->equip(IceInstance);
	him->equip(CureInstance);
	ICharacter* james = new Character("james");
	him->use(0, *james);
	him->use(1, *james);
	delete james;
	delete him;
	delete src1;
	delete IceSample;
	delete CureSample;

	return 0;
}