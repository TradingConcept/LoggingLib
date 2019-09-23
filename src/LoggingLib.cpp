#include "LoggingLib.hpp"

void Logging::Debug(const std::string& stream)
{
  std::cout << "DBG: " << stream << std::endl ;  
}

void Logging::Info(const std::string& stream)
{
  std::cout << "INF: " << stream << std::endl ;  
}

void Logging::Warn(const std::string& stream)
{
  std::cout << "WRN: " << stream << std::endl ;  
}

void Logging::Error(const std::string& stream)
{
  std::cout << "ERR: " << stream << std::endl ;  
}

