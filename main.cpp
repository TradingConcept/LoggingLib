#include <sstream>
#include <iostream>
#include "LoggingLib.hpp"

int main( int argc, char* argv[] )
{

  std::cout << "########################################################" << std::endl ;
  std::cout << "# Logging library" << std::endl ;
  std::cout << "########################################################" << std::endl << std::endl ;
  
  Logging::Debug("Hello, world!");
  Logging::Info("Hello, world!");
  Logging::Warn("Hello, world!");
  Logging::Error("Hello, world!");

  std::stringstream ss ;
  ss << "Hola" ;
  std::cout << ss.str() << std::endl ;

  std::cout << std::endl << "Press enter to exit..." ;
  std::getchar();
  
  return 0 ;
}

