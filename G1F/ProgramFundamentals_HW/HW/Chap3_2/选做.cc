#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <thread>
#include <chrono>
#include <boost/multiprecision/cpp_dec_float.hpp>

using hp = boost::multiprecision::number<boost::multiprecision::cpp_dec_float<110>>;

int main() {
    hp x5   = hp(1) / 5;
    hp x239 = hp(1) / 239;
    hp x5sq   = x5   * x5;
    hp x239sq = x239 * x239;

    hp s5 = 0, s239 = 0;
    hp pw5 = x5, pw239 = x239;
    int sign = 1;

    for (unsigned long long k = 0; ; ++k) {
        hp den = hp(2 * k + 1);
        s5   += sign * pw5   / den;
        s239 += sign * pw239 / den;
        pw5   *= x5sq;
        pw239 *= x239sq;
        sign = -sign;

        hp pi = 4 * (4 * s5 - s239);

        std::ostringstream oss;
        oss << "k=" << std::setw(3) << k
            << " pi=" << std::setprecision(100) << pi;
        std::string line = oss.str();

        std::cout << "\033[2K\r" << line << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }
}