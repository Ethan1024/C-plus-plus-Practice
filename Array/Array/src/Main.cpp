#include <iostream>
#include <array>

class Entity
{
public:
	static const int exampleSize = 6;
	int example[exampleSize];
	
	std::array<int,10> another;

	Entity()
	{
		int a[5];
		int count = sizeof(example) / sizeof(int);
		std::cout << "count:" << count << std::endl;
		for (int i = 0; i < another.size(); i++)
		{
			example[i] = i;
			std::cout << "example[" << i << "]:" << example[i] << std::endl;
		}

	}
};

int main()
{
	Entity e;
	//int example[5];
	//int* ptr = example;

	//for (int i = 0; i < 5; i++)
	//{
	//	example[i] = i;
	//	std::cout << example[i] << std::endl;
	//}	
	//
	//example[2] = 5;
	//*(ptr + 3) = 6;
	//std::cout << *ptr << std::endl;
	std::cin.get();
}