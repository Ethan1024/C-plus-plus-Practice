#include <iostream>
//#include <string>

void PrintString(const std::string& string)
{
	//string += "888";
	std::cout << string << std::endl;
}

int main()
{
	//char* name = "Ethan";	
	//����C++���󣺡�const char *�� ���͵�ֵ�������ڳ�ʼ�� ��char *�� ���͵�ʵ��
	//��VS2019�汾��ʹ������char*�ı�﷽ʽ����ɳ������������VS2019��������˿ؼ���������������Ƚ��ַ�ʹ���ַ�������д洢����ʹ��ָ��
	//char Name[] = "Ethan";	
	//char* name = Name;
	 
	std::string name = "Ethan";

	name[0] = 'e';
	char name2[6] = { 'E','t','h','a','n',0};

	std::cout << name << std::endl;
	std::cout << name.size() << std::endl;
	std::cout << name2 << std::endl;
	
	//�ַ���ƴ��
	name += "666";
	std::cout << name << std::endl;

	//std::string - ����ַ�������
	std::cout << name.size() << std::endl;
	
	//char* - ����ַ�������\
	//char *��һ��ָ������,���ڱ�ʾһ��ָ���ַ����鿪ͷ��ָ��,��char[]��һ���ַ���������,���ڱ�ʾһ���ַ�����
	char s[] = "Ethan";	
	char* S = s;
	std::cout << strlen(S) << std::endl;

	//�ַ���ƥ�� 
	bool contains = name.find("th") != std::string::npos;
	std::cout << "�Ƿ������"  << contains << std::endl;


	std::cout << "PrintString:" << std::endl;
	PrintString(name);


	std::cin.get();
} 