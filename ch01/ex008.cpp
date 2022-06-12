#include <iostream>
#include <cassert>
#include <math.h>
#include <vector>

bool isNarcissisticNum(int num)
{
    int digit100 = (num - (num % 100) ) / 100;
    int digit10  = ((num - digit100 * 100) - ((num - digit100 * 100) % 10)) / 10;
    int digit1   = num - digit100 * 100 - digit10 * 10;

    //debug: 
    //std::cout << digit100 << ", " << digit10 << ", " << digit1 << std::endl;

    // 今回の桁数は3で決め打ち
    int digits = 3;

    if (pow(digit100, digits) + pow(digit10, digits) + pow(digit1, digits) == num) {
        return true;
    }

    return false;
}

int main()
{
    // ３桁のナルシシスト数を導出する

    for (auto num = 100; num < 1000; ++num) {
        if (isNarcissisticNum(num))
        {
            std::cout << num << std::endl;
        }
    }
}