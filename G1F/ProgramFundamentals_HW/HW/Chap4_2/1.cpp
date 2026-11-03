#include <iostream>
#include <string>
using namespace std;

struct Student {
    string id;
    string name;
    int score[3];
    double average;
} students[4];

int main(void) {
    for (int i = 0; i < 4; ++i) {
        cin >> students[i].id >> students[i].name;
        for (int j = 0; j < 3; ++j) {
            cin >> students[i].score[j];
            students[i].average += students[i].score[j];
        }
        students[i].average /= 3;
    }
    for (int i = 0; i < 4; ++i) {
        cout << students[i].average << ' ';
    }
    return 0;
}