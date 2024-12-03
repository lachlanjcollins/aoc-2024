#include <algorithm>
#include <iostream>
#include <string>

namespace stringext {

std::pair<std::string, std::string> split(const std::string &str,
                                          char delim = ' ') {
    size_t pos = str.find(delim);

    if (pos == std::string::npos) {
        return {str, ""};
    }

    std::string first = str.substr(0, pos);
    std::string second = str.substr(pos + 1);

    return {first, second};
}

std::string removeSpaces(std::string str) {
    str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
    return str;
}

int toInt(const std::string &str) {
    try {
        int num = std::stoi(str);
        return num;
    } catch (const std::invalid_argument &e) {
        std::cerr << "Invalid input: " << e.what() << std::endl;
    } catch (const std::out_of_range &e) {
        std::cerr << "Number out of range: " << e.what() << std::endl;
    }
    return 0;
}

} // namespace stringext
