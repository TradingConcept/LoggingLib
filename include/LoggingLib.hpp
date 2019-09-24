#include <iostream>

class Logging
{

public:
  void Debug(const std::string&);
  void Info(const std::string&);
  void Warn(const std::string&);
  void Error(const std::string&);
};
