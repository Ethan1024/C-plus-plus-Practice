#include <iostream>

class Entity 
{
public:
	float X, Y;

	//构造函数
	Entity() 
	{
		X = 0.0f;	//float在32位和64位系统中均占4个字节
		Y = 0.0f;
		std::cout << "Created Entity!" << std::endl;
	}
	//析构函数，清除内存，main函数执行完后自动调用
	~Entity()
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}

	void Move(float xa, float ya)
	{
		X += xa;
		Y += ya;
	}

	//构造函数取代初始化函数
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
	Entity e;//实例化对象
	e.Print();
}

//Player 继承 Entity
class Player : public Entity
{
public:
	const char* Name = "小明";	//char* 在32位和64位系统中分别占4、8个字节

	void PrintName()
	{
		std::cout << Name << std::endl;
	}
};

int main()
{
	std::cout << sizeof(Player) << std::endl;	//32位配置输出12，64位配置输出16
	//Player player;	 //由于会再次输出“Created Entity!”
	//player.PrintName();
	//player.Move(7,7);
	//player.X = 2;
	Function();
	std::cin.get();
}