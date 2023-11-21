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
	//new����ҪĿ�����ڶ��Ϸ����ڴ�
	//��̬�����ڴ棬��ͨ��new�ؼ����ڶ��ϴ���
	int a = 2;
	int* b = new int[50];	//200bytes

	//ʹ��new�ڶ��Ϸ���Entity��
	Entity* e = new Entity[50];	//������Entity���캯��
	Entity* e = (Entity*)malloc(sizeof(Entity));	 //�����ڴ棬����һ��ָ���ڴ�ĵ�ַ 
	
	//ʹ��new�����ʹ��delete
	delete e;

	std::cin.get();
}