#include <iostream>

class Entity
{
private:
	mutable int m_DebugCount = 0;
	mutable int var;	//mutable �������ǳ����������������޸ı���

	//mutable
	std::string m_Name;
	int m_X, m_Y;
public:
	const std::string& GetName() const
	{
		m_DebugCount++;
		return m_Name;
	}
public:
	/* ������֮��const���÷� */
	int GetX() const
	{
		var = 2;

		std::cout << "var:" << var << std::endl;
		
		return m_X;
	}

	int SetX(int x)
	{ 
		m_X = x;
	}
};

void EntityPrint(const Entity& e)
{
	e.GetX();
}

int main()
{
	Entity e;

	EntityPrint(e);

	Entity f;
	f.GetName();
	
	int x = 6;
	//auto�ñ�����ȥ�������ʽ����������
	auto g = [=]() mutable
	{
		x++;
		std::cout << x << std::endl;
	};
	g();
  	//x = 6;

	//const ��ŵ��ַ���䣬��ַ������ݲ�һ������
	const int MAX_AGE = 999;

	int* a = new int;			    /* ���Ըı�ָ��ָ������ݣ����԰�ʵ�ʵ�ָ�����¸�ֵ */
	
	//const int* a = new int;	    /* �����Ըı�ָ��ָ������ݣ����԰�ʵ�ʵ�ָ�����¸�ֵ */
	//int* const a = new int;	    /* ���Ըı�ָ��ָ������ݣ������԰�ʵ�ʵ�ָ�����¸�ֵ */
	//const int* const a = new int;	/* �����Ըı�ָ��ָ������ݣ������԰�ʵ�ʵ�ָ�����¸�ֵ */

	//�ı�ָ��ָ����������
	*a = 2;

	//�ƿ�const���ƣ���MAX_AGE��ַ��ֵ��a
	a = (int*)&MAX_AGE;

	std::cout << "a:" << *a << std::endl;

	std::cin.get();
}