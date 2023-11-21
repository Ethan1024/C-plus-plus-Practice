#include <iostream>
#include <string>

using String = std::string;

class Entity
{
private:
	String m_Name;
public:
	Entity() : m_Name("Unknown") {}
	Entity(const String& name) : m_Name(name) {}
	const String& GetName() const { return m_Name; }
};

int main()
{
	//new的主要目的是在堆上分配内存
	//动态分配内存，并通过new关键字在堆上创建
	int a = 2;
	int* b = new int[50];	//200bytes

	//使用new在堆上分配Entity类
	Entity* e = new Entity[50];	//调用了Entity构造函数
	Entity* e = (Entity*)malloc(sizeof(Entity));	 //分配内存，创建一个指向内存的地址 
	
	//使用new后必须使用delete
	delete e;

	std::cin.get();
}