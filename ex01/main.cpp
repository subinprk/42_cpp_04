/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:45:09 by subpark           #+#    #+#             */
/*   Updated: 2024/04/27 21:01:30 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
//	const WrongAnimal *k = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();


	std::cout << std::endl;
	delete meta;
	delete i;
	delete j;
//	delete k;

	std::cout << "--------------------------\n";

	Cat basic;
	Cat tmp = basic;

	Cat tmp1(basic);

	std::cout << "--------------------------\n";
	
}