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
	//报错：C++错误：“const char *“ 类型的值不能用于初始化 “char *“ 类型的实体
	//在VS2019版本中使用这种char*的表达方式会造成程序崩溃，所以VS2019对其进行了控件管理。解决方法：先将字符使用字符数组进行存储，再使用指针
	//char Name[] = "Ethan";	
	//char* name = Name;
	 
	std::string name = "Ethan";

	name[0] = 'e';
	char name2[6] = { 'E','t','h','a','n',0};

	std::cout << name << std::endl;
	std::cout << name.size() << std::endl;
	std::cout << name2 << std::endl;
	
	//字符串拼接
	name += "666";
	std::cout << name << std::endl;

	//std::string - 输出字符串长度
	std::cout << name.size() << std::endl;
	
	//char* - 输出字符串长度\
	//char *是一个指针类型,用于表示一个指向字符数组开头的指针,而char[]是一个字符数组类型,用于表示一个字符数组
	char s[] = "Ethan";	
	char* S = s;
	std::cout << strlen(S) << std::endl;

	//字符串匹配 
	bool contains = name.find("th") != std::string::npos;
	std::cout << "是否包含："  << contains << std::endl;


	std::cout << "PrintString:" << std::endl;
	PrintString(name);


	std::cin.get();
} 