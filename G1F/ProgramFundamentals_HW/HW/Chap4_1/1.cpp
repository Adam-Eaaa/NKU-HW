#include <iostream>
#include <vector>
/*
#include <ranges>
#include <numeric>
#include <print>
*/

int main() {
    /*
    auto data = std::views::istream<double>(std::cin)
        | std::ranges::to<std::vector>();

    std::print("{}", std::accumulate(data.begin(), data.end(), 0.0) / data.size());
    */
    std::vector<double> data;
    double value;
    while (std::cin >> value) {
    data.push_back(value);
    }

    double s = 0.0;
    // for (auto i = data.begin(); i < data.end(); i++)
    for (const auto& val : data) {
        s += val; // s += (*i);
    }

    std::cout << s / data.size();
    return 0;     
}