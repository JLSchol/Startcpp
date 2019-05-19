// HelloWorld.h
#ifndef HELLO_WORLD_h
#define HELLO_WORLD_h 


class HelloWorld
{
public:
	HelloWorld();
	void setName(std::string name);
	std::string getName();
	void sayHi();

private: 
	std::string name_;
};


#endif