#include "stringProcessor.h"
#include <cctype>
bool isValidString(const std::string& s) {
    if (s.empty()) return false;
    for (unsigned char c : s) {
        if (!std::isalpha(c)) return false;
    }
    return true;
}
