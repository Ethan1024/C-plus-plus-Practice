#include <iostream>
#include <string>

static int s_Level = 1;
static int s_Speed = 2;

int main()
{
	//三元操作符是if语句的语法糖
	if (s_Level > 5)
		s_Speed = 10;
	else
		s_Speed = 5;

	//三元操作符,帮助理清思路
	s_Speed = s_Level > 5 ? 10 : 5;

	std::string rank = s_Level > 5 ? "Master" : "Beginner";
	
	//三元操作符的嵌套,Level大于5且大于10（Speed = 15），Level大于5不大于10（Speed = 10），Level不大于5且不大于10（Speed = 5）
	s_Speed = s_Level > 5 ? s_Level > 10 ? 15 : 10 : 5;
	std::cout << "s_Speed: " << s_Speed << std::endl;
	//(s_Level > 5 && s_Level < 100)
	s_Speed = s_Level > 5 && s_Level < 100 ? s_Level > 10 ? 15 : 10 : 5;

	std::cin.get();
}