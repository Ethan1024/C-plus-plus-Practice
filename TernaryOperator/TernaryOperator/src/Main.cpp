#include <iostream>
#include <string>

static int s_Level = 1;
static int s_Speed = 2;

int main()
{
	//��Ԫ��������if�����﷨��
	if (s_Level > 5)
		s_Speed = 10;
	else
		s_Speed = 5;

	//��Ԫ������,��������˼·
	s_Speed = s_Level > 5 ? 10 : 5;

	std::string rank = s_Level > 5 ? "Master" : "Beginner";
	
	//��Ԫ��������Ƕ��,Level����5�Ҵ���10��Speed = 15����Level����5������10��Speed = 10����Level������5�Ҳ�����10��Speed = 5��
	s_Speed = s_Level > 5 ? s_Level > 10 ? 15 : 10 : 5;
	std::cout << "s_Speed: " << s_Speed << std::endl;
	//(s_Level > 5 && s_Level < 100)
	s_Speed = s_Level > 5 && s_Level < 100 ? s_Level > 10 ? 15 : 10 : 5;

	std::cin.get();
}