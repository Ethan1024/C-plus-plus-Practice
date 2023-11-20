#include <iostream>
#include <string>

class Example
{
public:
	Example()
	{
		std::cout << "Creat Entity!" << std::endl;
	}

	Example(int x)
	{
		std::cout << "Creat Entity with " << x << "!" << std::endl;
	}
};

class Entity
{
private:
	int m_Score;
	int x, y, z;
	std::string m_Name;
	Example m_Example;
public:
	//成员初始化列表
	Entity()
		:m_Name("Unknown"),m_Score(10),x(100),y(1000),z(10000),m_Example(666)
	{
		//直接初始化
		//m_Name = "Unknown";

		//m_Example = Example(666);
	}

	Entity(const std::string& name) 
		: m_Name(name)
	{
		/*m_Name = name;*/
	}

	const std::string& GetName() const { return m_Name;  }
};

int main()
{
	Entity e0;
	std::cout << e0.GetName() << std::endl;

	Entity e1("Ethan");
	std::cout << e1.GetName() << std::endl;

	//std::cout << Entity::x << std::endl;

	std::cin.get();
}