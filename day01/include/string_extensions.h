#ifndef STRING_EXTENSIONS_H
#define STRING_EXTENSIONS_H

#include <utility>

namespace stringext {

std::pair<std::string, std::string> split(const std::string &str,
                                          char delim = ' ');

std::string removeSpaces(std::string str);

int toInt(const std::string &str);

} // namespace stringext

#endif
