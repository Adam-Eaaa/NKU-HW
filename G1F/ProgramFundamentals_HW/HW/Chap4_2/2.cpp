#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <print>
using namespace std;

constexpr int INF = 0xfffffff;

struct Student {
    string id, name;
    array<int, 3> score;
};

array<Student, 3> maximum;

vector<Student> students;
int N;

int main() {
    cin >> N;
    students.resize(N);
    for (auto& i : maximum) {
        for (auto& j : i.score) {
            j = -INF;
        }
    }
    for (auto& i : students) {
        cin >> i.id >> i.name;
        for (auto& j : i.score) {
            cin >> j;
        }
        for (int j = 0; j < 3; ++j) {
            if (i.score[j] > maximum[j].score[j]) {
                maximum[j] = i;
            }
        }
    }
    for (const auto& i : maximum) {
        println("{} {}: {} {} {}", i.id, i.name, i.score[0], i.score[1], i.score[2]);
    }
    return 0;
}