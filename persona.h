#ifndef Persona
#define Persona
#include <string>

class Person
{
// public variables and functions
public:
	// class constructor
	Person();

	std::string name;
	std::string getName();
	int age;
	int  getAge();
	void setName(std::string);
	void setAge(int);
};

// define the class constructor
Person::Person()
{
	age=10;
	name ="Adil";
	// initialize some variables...
}

// define the setName() function in the Person class
void Person::setName(std::string userName)
{
	// set the name variable in the Person class to the given argument userName
	name = userName;
}

// define the setAge() function in the Person class
void Person::setAge(int userAge)
{
	// set the age variable in the Person class to the given argument userAge
	age = userAge;
}
int Person::getAge()
{
	// set the age variable in the Person class to the given argument userAge
	return age;
}
std::string Person::getName()
{
	// set the age variable in the Person class to the given argument userAge
	return name;
}
#endif