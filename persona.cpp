#include <iostream>
#include <string>

#include "persona.h"

int main(void)
{
	// create a new person named bob
	Person bob;

	// define bob
	bob.setName("Bob");
	bob.setAges(30);

	// display bob's age
	std::cout << bob.name << " is " << bob.age << " years old." << std::endl;
}