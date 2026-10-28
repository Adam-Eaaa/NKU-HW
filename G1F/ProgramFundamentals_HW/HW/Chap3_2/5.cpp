#include <iostream>
#include <string>
using namespace std;

int main() {
    for (int i = 1; i <= 6; ++i) {
        cout << string(6 - i, ' ') 
            << string(i * 2 - 1, '*') << endl;
    }
    return 0;
}