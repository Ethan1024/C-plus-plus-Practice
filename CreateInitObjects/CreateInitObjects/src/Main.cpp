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
		
		//Function(); �������������ʱ��ջ֡�ᱻ����
		//��ջ�ϴ���,ջ����
		//Entity entity("Ethan");
		//e = &entity;
		//std::cout << entity.GetName() << std::endl;

		//�ѷ��䣬�ѷ����ջ����Ŀռ��
		Entity* entity = new Entity("Ethan"); 
		e = entity;
		std::cout << entity->GetName() << std::endl;
	}
	
	std::cin.get();
	delete e;	//���ϴ�����delete֮���ͷ�
}