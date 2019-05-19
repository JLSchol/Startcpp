#include <string>
#include <iostream> 

#include "hello_world.h"



int main()
{

HelloWorld ZegHoi;

ZegHoi.setName("Jasper");
std::string naampie = ZegHoi.getName();

ZegHoi.sayHi();

std::cout << "naampie= " << naampie << std::endl;

return 0;
}



HelloWorld::HelloWorld(){
	std::cout << "Hello World" << std::endl;
}

void HelloWorld::setName(std::string new_name){
	name_ = new_name;
	std::cout << "Set name: " << name_ << std::endl;
}

std::string HelloWorld::getName(){
	std::cout << "Get name: " << name_ << std::endl;
	return name_;
}

void HelloWorld::sayHi(){
	std::cout << "Hi " << name_ << " !" << std::endl;
}

