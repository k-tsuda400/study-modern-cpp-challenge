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

    assert(n > 0 && "���͂͐��̐����łȂ���΂����܂���");

    int counter = 1;
    while (counter <= n) {
        // �ߏ萔���`�F�b�N
        auto cm_sum_value = cm_sum(counter);
        if (counter * 2 < cm_sum_value) {
            std::cout << counter << "(�񐔂̘a:" << cm_sum_value << "), �ߏ萔: " << cm_sum_value - (counter * 2) << std::endl;
        }
        ++counter;
    }
    
}