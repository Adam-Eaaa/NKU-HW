#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, res;
    scanf("%lf", &x);
    if (x > 1) {
        res = x * sin(x);
    }
    else if (x > -1) {
        res = (x + 2) * x;
    }
    else {
        res = exp(-x);
    }
    cout << res;
    return 0;
}