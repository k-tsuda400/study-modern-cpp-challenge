#include <iostream>

int main()
{
    int upper;
    std::cin >> upper;

    int ans = 0;

    for (auto i = 1; i <= upper; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            ++ans;
        }
    }

    std::cout << ans << std::endl;
}