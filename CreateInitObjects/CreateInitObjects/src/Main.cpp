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

	const String& GetName() const { return m_Name;  }
};

//void Function()
//{
//	int a = 2;
//	Entity entity = Entity("Ethan");
//}

int main()
{
	Entity* e;
	{
		
		//Function(); 当这个函数结束时，栈帧会被销毁
		//在栈上创建,栈分配
		//Entity entity("Ethan");
		//e = &entity;
		//std::cout << entity.GetName() << std::endl;

		//堆分配，堆分配比栈分配的空间大
		Entity* entity = new Entity("Ethan"); 
		e = entity;
		std::cout << entity->GetName() << std::endl;
	}
	
	std::cin.get();
	delete e;	//堆上创建在delete之后被释放
}