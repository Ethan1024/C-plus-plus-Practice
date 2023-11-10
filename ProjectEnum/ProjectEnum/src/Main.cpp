#include <iostream>

class Log
{
public:
	enum Level
	{
		LevelError = 0, Levelwarning, LevelInfo
	};
private:
	Level m_LogLevel = LevelError;
public:
	void SetLevel(Level level)
	{
		m_LogLevel = level;
	}

	void Error(const char* message)
	{
		if (m_LogLevel >= LevelError)
			std::cout << "[Error]:" << message << std::endl;
	}

	void warn(const char* message)
	{
		if (m_LogLevel >= Levelwarning)
			std::cout << "[warn]:" << message << std::endl;
	}

	void Info(const char* message)
	{
		if (m_LogLevel >= LevelInfo)
			std::cout << "[Info]:" << message << std::endl;
	}
};

int main()
{
	Log log;
	log.SetLevel(Log::LevelInfo);
	log.warn("¾¯¸æ");
	log.Error("´íÎó");
	log.Info("ÌáÊ¾");
	std::cin.get();
}