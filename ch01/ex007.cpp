#include <iostream>
#include <cassert>
#include <math.h>
#include <vector>

int cm_sum_wituout_upper(int num)
{
    auto sum = 0;

    // これでは遅いので改良
    //for (auto i = 1; i <= num / 2; ++i) {
    //    if (num % i == 0) {
    //        sum += i;
    //    }
    //}
    //return sum;

    // 改良後
    // 参考：https://algo-logic.info/divisor/
    for (auto i = 1; i * i < num; ++i) {
        if (num % i == 0) {
            sum += i;
            if (i * i != num) {
                sum += num / i;
            }
        }
    }

    // 約数の和から、その値と同じ値は除外する(例：6の約数の総和を取るとき、6は除外)
    return sum - num;
}

// 友愛数
bool is_amicable(int num_sum, int num_hikaku) {
    if (cm_sum_wituout_upper(num_sum) == num_hikaku &&
        num_sum != num_hikaku) {
        return true;
    }
    return false;
}

// 出された解が、既に求められていたペアでないか確認
bool is_already_exist(int counter, std::vector<int>& vecInt)
{
    for (auto num : vecInt)
    {
        if (num == counter || num == cm_sum_wituout_upper(counter)) {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> vecAns;

    assert(n > 0 && "入力は正の整数でなければいけません");

    int counter = 1;
    while (counter <= n) {
        // 過剰数かチェック
        auto cm_sum_value = cm_sum_wituout_upper(counter);

        // 上限チェック
        if (cm_sum_value > n) {
            ++counter;
            continue;
        }

        if (is_amicable(cm_sum_value, counter) && cm_sum_value > 0) {
            if (!is_already_exist(counter, vecAns)) {
                vecAns.push_back(counter);
                std::cout << "(" << counter << ", " << cm_sum_value << ")" << std::endl;
            }
        }
        ++counter;
    }

}