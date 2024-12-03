#include "string_extensions.h"
#include <fstream>
#include <iostream>
#include <set>
#include <string>

int toSanitisedInt(const std::string &str) {
    return stringext::toInt(stringext::removeSpaces(str));
}

int main() {
    std::ifstream file("../res/input.txt");

    if (!file.is_open()) {
        std::cerr << "Unable to open file!" << std::endl;
        return 1;
    }

    std::string line;
    std::multiset<int> left;
    std::multiset<int> right;

    while (std::getline(file, line)) {
        std::pair<std::string, std::string> split = stringext::split(line);
        left.insert(toSanitisedInt(split.first));
        right.insert(toSanitisedInt(split.second));
    }

    auto itLeft = left.begin();
    auto itRight = right.begin();

    int sum = 0;

    for (int i = 0; i < left.size(); i++) {
        sum += std::abs(*itLeft - *itRight);
        ++itLeft;
        ++itRight;
    }

    std::cout << "Total sum: " << sum;

    file.close();
    return 0;
}
