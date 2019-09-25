#include <iostream>
#include <sstream>

class Logging
{

  static void Log(const std::string& stream, const std::string& type);
  
public:
  
  static void Debug(const std::string &);
  static void Info(const std::string &);
  static void Info(const std::stringstream &);
  static void Warn(const std::string &);
  static void Error(const std::string &);
};
