#include <iostream>
#include <string>

class Entity
{
public:
	virtual std::string GetName() { return "Entity"; }	//std::string ��������һ�������ַ�������ĺ���
											 //virtualʹ����������V��ʹ�ñ���д��GetName����ȷ�ĵ���
//�ɼ���
protected:
	int X, Y;
	void Print() {};
};
//Player �̳� Entity����д��ԭ��GetName()����
class Player : public Entity
{
private:
	std::string m_Name;
public:
	Player(const std::string& name): m_Name(name) 	//���캯�� 
	{
		Print();
	}
	//��׼ģ��⣨STL���ṩ��һ��std::string�࣬����std::basic_string��һ���ػ�������һ�������࣬�ɰ��ַ���������ͨ������ʹ�ã���֧�ֱȽϡ����ӡ�������STL�㷨�����ơ���ֵ�ȵȲ���������ඨ����<string>ͷ�ļ���
	
	std::string GetName() override { return m_Name; }
};

void PrintName(Entity* entity)
{
	std::cout << entity->GetName() << std::endl;
}

int main()
{
	Entity* e = new Entity();
	
	//std::cout << e->GetName() << std::endl;	//ԭGetName
	PrintName(e);

	Player* p = new Player("Ethan");
	//std::cout << p->GetName() << std::endl;	//��д���GetName
	PrintName(p);

	Entity* r;
	r.Print();
	std::cin.get();
}