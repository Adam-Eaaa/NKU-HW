#include <iostream>
#include <cmath>

double f(double x) {
    return 5 * x * x * x - 3 * x * x + 2 * x - 8;
}

double df(double x) {
    return 15 * x * x - 6 * x + 2;
}

// 注: 递归可能存在栈溢出风险，经实践检验本题无此风险
// 若想增加代码的 Robustness, 可改为 while 循环
double iter(double init, double thr) {
    double res;
    res = init - f(init) / df(init);
    if (fabs(res - init) < thr) return res;
    return iter(res, thr);
}

int main() {
    std:: cout << iter(1.1, 1e-6);
    return 0;
}