#include <iostream>
using namespace std;

typedef unsigned long long int ull_t;

int main() {
    ios::sync_with_stdio(false);
    ull_t n, sum = 0, curr = 1;
    cin >> n;
    for (ull_t i = 1; i <= n; i++) {
        curr *= i; // curr = i!
        sum += curr;
    }
    cout << sum;
    return 0;
}