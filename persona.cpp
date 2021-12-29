#include <iostream>
#include <string>

#include "persona.h"

int main(void)
{
	// create a new person named bob
	Person bob;
	Person b;
	// define bob
	bob.setName("Bob");
	bob.setAge(30);
	bob.setName("Ruben");
	
	b.setName("Maria");
	b.setAge(35);

	// display bob's age
	std::cout << bob.name << " is " << bob.age << " years old." << std::endl;
}