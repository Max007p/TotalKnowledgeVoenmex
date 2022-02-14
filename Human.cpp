#include "Human.h"
#include <iostream>

void Human::setAge(int age)
{
	this->age = age;
}

void Human::setName(std::string name)
{
	this->name = name;
}

int Human::getAge() const
{
	return this->age;
}

std::string Human::getName() const
{
	return this->name;
}

Human::Human()
{

}

Human::Human(int age, std::string name): age(age), name(name)
{
	std::cout << "Created a human!" << std::endl;
}

Human::~Human()
{
	std::cout << "Killed a human!" << std::endl;
}