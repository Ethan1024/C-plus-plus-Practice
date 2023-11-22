#include <iostream>
#include <string>

class Entity
{
private:
	std::string m_Name;
	int m_Age;
public:
	//explicit Entity(const std::string& name)
	Entity(const std::string& name)
		:m_Name(name), m_Age(-1) {}

	//explicit Entity(int age)
	Entity(int age)
		:m_Name("Unknow"), m_Age(age) {}

	//explicit禁用隐式（implicit）的功能，必须使用显式调用构造函数
};

void PrintEntity(const Entity& entity)
{
	//Printing
}

int main()
{
	//隐式转换
	PrintEntity(25);
	
	PrintEntity(Entity("Ethan"));
	PrintEntity(std::string("Ethan"));

	Entity a("Ethan");
	Entity b(25);
	
	Entity a = std::string ("Ethan");
	Entity b = 25;
	std::cin.get();
}