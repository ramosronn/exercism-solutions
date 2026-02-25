#include <string>

namespace log_line {
    std::string message(std::string line) {
        std::string extracted_message = line.substr(line.find(" ")+1);
        return extracted_message;
    }
    
    std::string log_level(std::string line) {
        std::string extracted_log_level = line.substr(line.find("[")+1, line.find("]")-1);
        return extracted_log_level;
    }
    
    std::string reformat(std::string line) {
        std::string reformatted_log_line = log_line::message(line) + " " + "(" + log_line::log_level(line) + ")";
        return reformatted_log_line;
    }
}  // namespace log_line
