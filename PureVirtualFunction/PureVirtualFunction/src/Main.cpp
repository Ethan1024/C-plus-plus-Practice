#include <iostream>
#include <string>

//���麯��
class Printable
{
public:
	virtual std::string GetClassName() = 0;
};

class Entity : public Printable
{
public:
	virtual std::string GetName() { return "Entity"; }	//std::string ��������һ�������ַ�������ĺ���
	//virtualʹ����������V��ʹ�ñ���д��GetName����ȷ�ĵ���
	std::string GetClassName() override { return "Entity"; }													
};
//Player �̳� Entity����д��ԭ��GetName()����
class Player : public Entity
{
private:
	std::string m_Name;
public:
	Player(const std::string& name) : m_Name(name) {}	//���캯�� 

	//��׼ģ��⣨STL���ṩ��һ��std::string�࣬����std::basic_string��һ���ػ�������һ�������࣬�ɰ��ַ���������ͨ������ʹ�ã���֧�ֱȽϡ����ӡ�������STL�㷨�����ơ���ֵ�ȵȲ���������ඨ����<string>ͷ�ļ���

	std::string GetName() override { return m_Name; }
	std::string GetClassName() override { return "Player"; }
};

void PrintName(Entity* entity)
{
	std::cout << entity->GetName() << std::endl;
}

void Print(Printable* obj)
{
	std::cout << obj->GetClassName() << std::endl;
}

class A : public Printable
{
	std::string GetClassName() override { return "A"; }
};
int main()
{
	Entity* e = new Entity();
	//std::cout << e->GetName() << std::endl;	//ԭGetName
	//PrintName(e);
	Print(e);

	Player* p = new Player("Ethan");
	//std::cout << p->GetName() << std::endl;	//��д���GetName
	//PrintName(p);
	Print(p);
	Print(new A);
	std::cin.get();
}