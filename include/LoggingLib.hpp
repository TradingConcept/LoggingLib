#include <iostream>

class Logging
{

public:
  static void Debug(const std::string&);
  static void Info(const std::string&);
  static void Warn(const std::string&);
  static void Error(const std::string&);
  
};