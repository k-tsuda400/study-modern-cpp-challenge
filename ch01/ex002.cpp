#include <iostream>
#include <cassert>

int main()
{
    int n1;
    int n2;
    std::cin >> n1;
    std::cin >> n2;

    assert(n1 > 0 && "入力は正の整数でなければいけません");
    assert(n2 > 0 && "入力は正の整数でなければいけません");

    int ans = 1;

    if (n1 == n2) {
        // どちらも同じ値なら、同じ値を返せばいい
        ans = n1;
    }
    else {
        // 全探索はもったいないので、
        // 最大公約数は大きいほうの数字の半分までチェックすれば十分
        for (auto i = 1; i <= int(std::max(n1, n2) / 2); ++i) {
            if (n1 % i == 0 && n2 % i == 0) {
                ans = i;
            }
        }
    }

    std::cout << ans << std::endl;
}

// 最大公約数
// 15 と 24 なら 3