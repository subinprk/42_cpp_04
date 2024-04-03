/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:45:09 by subpark           #+#    #+#             */
/*   Updated: 2024/04/03 12:28:34 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* animal = new Animal();
	const Animal* animal_ptr;
	const Animal* dog = new Dog();
	const Animal* dog_ptr;
	const Animal* cat = new Cat();
	const WrongAnimal* wanimal = new WrongAnimal();
	const WrongAnimal* wani_p;
	const WrongCat *wrongcat = new WrongCat();
	const WrongCat *wcat_p;

	std::cout << std::endl;
	std::cout << "Dog->getType [" << dog->getType() << "] " << std::endl;
	std::cout << "Cat->getType [" << cat->getType() << "] " << std::endl;
	cat->makeSound(); //will output the cat sound! (not the Animal)
	dog->makeSound(); //will output the dog sound! (not the Animal)
	animal->makeSound(); //will output the animal sound

	animal_ptr = cat; //downcasting
	animal_ptr->makeSound();
	dog_ptr = animal;
	dog_ptr->makeSound();//upcasting

	wanimal->makeSound();
	wrongcat->makeSound();

	// wcat_p = wanimal;
	// wcat_p->makeSound();

	// std::cout << std::endl;
	// const WrongAnimal* wrong_animal = new WrongAnimal();
	// const WrongAnimal* wrong_cat = new WrongCat();

	// std::cout << std::endl;
	// wrong_cat->makeSound();
	// wrong_animal->makeSound();

	std::cout << std::endl;
	delete animal;
	delete dog;
	delete cat;
// 	delete wrong_cat;
// 	delete wrong_animal;
}