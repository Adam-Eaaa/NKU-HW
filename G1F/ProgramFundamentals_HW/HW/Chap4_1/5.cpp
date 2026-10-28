#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    std::print("{}", std::equal(s.begin(), s.begin() + s.size() / 2, s.rbegin())?"是回文":"不是回文");
    return 0;
}