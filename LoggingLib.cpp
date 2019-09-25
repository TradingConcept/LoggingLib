#include <mutex>
#include <future>
#include <boost/date_time/posix_time/posix_time.hpp>
#include "LoggingLib.hpp"
using namespace boost::posix_time;

void Logging::Log(const std::string &stream, const std::string &type)
{
  static std::mutex mu;
  ptime now = microsec_clock::local_time();
  std::unique_lock<std::mutex> locker(mu);
  std::cout << now << type << stream << std::endl;
}

void Logging::Debug(const std::string &stream)
{
  auto dummy = std::async(Logging::Log, stream, " [DEBUG] ");
}

void Logging::Info(const std::string &stream)
{
  auto dummy = std::async(Logging::Log, stream, " [INFO] ");
}

void Logging::Info(const std::stringstream &stream)
{
  Logging::Info(stream.str());
}

void Logging::Warn(const std::string &stream)
{
  Logging::Log(stream, " [WARN] ");
}

void Logging::Error(const std::string &stream)
{
  Logging::Log(stream, " [ERROR] ");
}