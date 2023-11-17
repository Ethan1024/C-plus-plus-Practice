#include <iostream>

class Entity
{
private:
	mutable int m_DebugCount = 0;
	mutable int var;	//mutable 允许函数是常量方法，但可以修改变量

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
	/* 方法名之后const的用法 */
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
	//auto让编译器去分析表达式所属的类型
	auto g = [=]() mutable
	{
		x++;
		std::cout << x << std::endl;
	};
	g();
  	//x = 6;

	//const 承诺地址不变，地址里的内容不一定不变
	const int MAX_AGE = 999;

	int* a = new int;			    /* 可以改变指针指向的内容，可以把实际的指针重新赋值 */
	
	//const int* a = new int;	    /* 不可以改变指针指向的内容，可以把实际的指针重新赋值 */
	//int* const a = new int;	    /* 可以改变指针指向的内容，不可以把实际的指针重新赋值 */
	//const int* const a = new int;	/* 不可以改变指针指向的内容，不可以把实际的指针重新赋值 */

	//改变指针指向内容内容
	*a = 2;

	//绕开const限制，把MAX_AGE地址赋值给a
	a = (int*)&MAX_AGE;

	std::cout << "a:" << *a << std::endl;

	std::cin.get();
}