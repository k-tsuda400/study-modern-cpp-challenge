#include <iostream>
#include <cassert>
#include <math.h>
#include <vector>

int cm_sum_wituout_upper(int num)
{
    auto sum = 0;

    // ����ł͒x���̂ŉ���
    //for (auto i = 1; i <= num / 2; ++i) {
    //    if (num % i == 0) {
    //        sum += i;
    //    }
    //}
    //return sum;

    // ���ǌ�
    // �Q�l�Fhttps://algo-logic.info/divisor/
    for (auto i = 1; i * i < num; ++i) {
        if (num % i == 0) {
            sum += i;
            if (i * i != num) {
                sum += num / i;
            }
        }
    }

    // �񐔂̘a����A���̒l�Ɠ����l�͏��O����(��F6�̖񐔂̑��a�����Ƃ��A6�͏��O)
    return sum - num;
}

// �F����
bool is_amicable(int num_sum, int num_hikaku) {
    if (cm_sum_wituout_upper(num_sum) == num_hikaku &&
        num_sum != num_hikaku) {
        return true;
    }
    return false;
}

// �o���ꂽ�����A���ɋ��߂��Ă����y�A�łȂ����m�F
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

    assert(n > 0 && "���͂͐��̐����łȂ���΂����܂���");

    int counter = 1;
    while (counter <= n) {
        // �ߏ萔���`�F�b�N
        auto cm_sum_value = cm_sum_wituout_upper(counter);

        // ����`�F�b�N
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