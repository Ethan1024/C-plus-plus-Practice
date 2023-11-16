#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale>  

using namespace std;

int main()
{
	using namespace std::string_literals;
	//操作，不同数据类型的字符串拼接
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

	char Name[] = u8"Ethan";	//一个字节的字符
	const char* name = Name;

	//声明变量，字符串字面值由宽字符组成
	const wchar_t* name2 = L"Ethan";	//两个字节的字符

	const char16_t* name3 = u"Etahn";	//两个字节的16个比特的字符
	const char32_t* name4 = U"Etahn";	//四个字节32比特的字符

	std::cout << "name:" << name << std::endl;
	
	std::cin.get();
}