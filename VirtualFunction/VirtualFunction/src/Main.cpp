#include <iostream>
#include <string>

class Entity
{
public:
	virtual std::string GetName() { return "Entity"; }	//std::string 用来定义一个返回字符串对象的函数
											 //virtual使编译器生成V表，使得被重写的GetName被正确的调用
//可见性
protected:
	int X, Y;
	void Print() {};
};
//Player 继承 Entity并重写了原有GetName()函数
class Player : public Entity
{
private:
	std::string m_Name;
public:
	Player(const std::string& name): m_Name(name) 	//构造函数 
	{
		Print();
	}
	//标准模板库（STL）提供了一个std::string类，其是std::basic_string的一个特化，它是一个容器类，可把字符串当作普通类型来使用，并支持比较、连接、遍历、STL算法、复制、赋值等等操作，这个类定义在<string>头文件中
	
	std::string GetName() override { return m_Name; }
};

void PrintName(Entity* entity)
{
	std::cout << entity->GetName() << std::endl;
}

int main()
{
	Entity* e = new Entity();
	
	//std::cout << e->GetName() << std::endl;	//原GetName
	PrintName(e);

	Player* p = new Player("Ethan");
	//std::cout << p->GetName() << std::endl;	//重写后的GetName
	PrintName(p);

	Entity* r;
	r.Print();
	std::cin.get();
}