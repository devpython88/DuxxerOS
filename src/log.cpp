#include "log.hpp"

Log::Log(std::string beginningLog)
{
    logs.push_back(beginningLog);
}

std::string Log::GetLog(int index)
{
    return logs.at(index);
}

std::vector<std::string> Log::GetLog()
{
    return logs;
}

void Log::AddLog(std::string log)
{
    logs.push_back(log);
}
