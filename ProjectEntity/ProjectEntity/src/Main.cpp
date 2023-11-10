#include <iostream>

class Entity 
{
public:
	float X, Y;

	//���캯��
	Entity() 
	{
		X = 0.0f;	//float��32λ��64λϵͳ�о�ռ4���ֽ�
		Y = 0.0f;
		std::cout << "Created Entity!" << std::endl;
	}
	//��������������ڴ棬main����ִ������Զ�����
	~Entity()
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}

	void Move(float xa, float ya)
	{
		X += xa;
		Y += ya;
	}

	//���캯��ȡ����ʼ������
	//void Init()
	//{
	//	X = 0.0f;
	//	Y = 0.0f;
	//}

	void Print()
	{
		std::cout << X << "," << Y << std::endl;
	}
};

void Function()
{
	Entity e;//ʵ��������
	e.Print();
}

//Player �̳� Entity
class Player : public Entity
{
public:
	const char* Name = "С��";	//char* ��32λ��64λϵͳ�зֱ�ռ4��8���ֽ�

	void PrintName()
	{
		std::cout << Name << std::endl;
	}
};

int main()
{
	std::cout << sizeof(Player) << std::endl;	//32λ�������12��64λ�������16
	//Player player;	 //���ڻ��ٴ������Created Entity!��
	//player.PrintName();
	//player.Move(7,7);
	//player.X = 2;
	Function();
	std::cin.get();
}