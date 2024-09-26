#if !defined(LOG_HPP)
#define LOG_HPP


#include <vector>
#include <string>


class Log {
    private:
    std::vector<std::string> logs;

    public:
    Log(std::string beginningLog = "NULL");
    std::string GetLog(int index);
    std::vector<std::string> GetLog();
    void AddLog(std::string log);
};

#endif // LOG_HPP
