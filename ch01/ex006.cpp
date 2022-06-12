#include <iostream>
#include <cassert>
#include <math.h>

int cm_sum(int num)
{
    auto sum = 0;
    for (auto i = 1; i <= num; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int n;
    std::cin >> n;

    assert(n > 0 && "入力は正の整数でなければいけません");

    int counter = 1;
    while (counter <= n) {
        // 過剰数かチェック
        auto cm_sum_value = cm_sum(counter);
        if (counter * 2 < cm_sum_value) {
            std::cout << counter << "(約数の和:" << cm_sum_value << "), 過剰数: " << cm_sum_value - (counter * 2) << std::endl;
        }
        ++counter;
    }
    
}