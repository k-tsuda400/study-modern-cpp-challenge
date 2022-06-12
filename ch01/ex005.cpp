#include <iostream>
#include <cassert>
#include <math.h> 

// 参考：https://qiita.com/asksaito/items/76b71602dd956b79dbf7
bool IsPrime(int num)
{
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false; // 偶数はあらかじめ除く

    // 合成数xはp≦√xを満たす素因子pをもつ
    // この範囲の値で割り切れないなら、素数と判定できる
    // 参考：https://4engineer.net/competitive/sosu-hantei/
    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            // 素数ではない
            return false;
        }
    }

    // 素数である
    return true;
}

int main()
{
    int n;
    std::cin >> n;

    assert(n > 0 && "入力は正の整数でなければいけません");

    int counter = 2;

    std::cout << "--------" << std::endl;

    // 素数は必ず存在するので、見つかるまでループを回す実装で問題ない
    while (counter < n) {
        if (auto pairNum = counter + 6 ;
            IsPrime(counter) && IsPrime(pairNum) && pairNum <= n) {
            std::cout << "(" << counter << ", "  << pairNum << ")" << std::endl;
        }
        ++counter;
    }
}