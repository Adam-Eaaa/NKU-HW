#include <iostream>
#include <vector>

// 若仅要求 Fibonacci 数列的某一项, 采用矩阵快速幂将是最为快速的算法。
// 可惜要输出整个数列, 线性计算必不可少。

int main(void) {
    int n;
    std::vector<long long int> fib(2, 1);
    std::cin >> n;
    std::print("1 1 ");
    for (int i = 2; i < n; i++) {
        fib.push_back(fib[i - 2] + fib[i - 1]);
        std::print("{} ", fib[i]);
    }
    return 0;
}