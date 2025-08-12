#include <iostream>

#include "Logger.h"


#define VertEngineInfoTag "[VertEngine::Logger::info] "
#define VertEngineErrorTag "[VertEngine::Logger::error] "
#define VertEngineWarnTag "[VertEngine::Logger::warn] "

void VertEngine::Logger::info(const char* message) {
	std::cout << VertEngineInfoTag << message << std::endl;
}

void VertEngine::Logger::error(const char* message) {
	std::cerr << VertEngineErrorTag << message << std::endl;
}

void VertEngine::Logger::warn(const char* message) {
	std::cout << VertEngineWarnTag << message << std::endl;
}