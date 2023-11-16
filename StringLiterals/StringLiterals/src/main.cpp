#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale>  

using namespace std;

int main()
{
	using namespace std::string_literals;
	//��������ͬ�������͵��ַ���ƴ��
	std::string name00 = u8"Ethan"s + "00";
	std::wstring name01 = L"Ethan"s + L"01";
	std::u16string name02 = u"Ethan"s + u"02";
	std::u32string name03 = U"Ethan"s + U"03";

	const char* example = R"(Line1
Line2
Line3)";

	const char* ex = "line4\n"
		"line5\n"
		"line6\n";

	std::cout << name00 << std::endl;

	wcout.imbue(locale("chs"));
	wcout << name01 << endl;
	
	for (const auto& c : name02)
		std::cout << static_cast<char>(c);
	std::cout << "\0" << std::endl;

	for (const auto& c : name03)
		std::cout << static_cast<char>(c);
	std::cout << "\0" << std::endl;

	std::cout << example << std::endl;
	std::cout << ex << std::endl;

	char Name[] = u8"Ethan";	//һ���ֽڵ��ַ�
	const char* name = Name;

	//�����������ַ�������ֵ�ɿ��ַ����
	const wchar_t* name2 = L"Ethan";	//�����ֽڵ��ַ�

	const char16_t* name3 = u"Etahn";	//�����ֽڵ�16�����ص��ַ�
	const char32_t* name4 = U"Etahn";	//�ĸ��ֽ�32���ص��ַ�

	std::cout << "name:" << name << std::endl;
	
	std::cin.get();
}