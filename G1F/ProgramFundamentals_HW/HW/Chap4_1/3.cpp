#include <iostream>
#include <vector>
#include <numeric>

struct Student {
    std::array<int, 3> score;
    int sum;
};

int main() {
    int n;
    std::cin >> n;
    std::vector<Student> students(n);
    for (auto& s : students) {
        std::cin >> s.score[0] >> s.score[1] >> s.score[2];
        s.sum = std::accumulate(s.score.begin(), s.score.end(), 0);
    }

    for (const auto& s : students) {
        std::print("{} ", s.sum);
    }
    return 0;
}
