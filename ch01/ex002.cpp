#include <iostream>
#include <cassert>

int main()
{
    int n1;
    int n2;
    std::cin >> n1;
    std::cin >> n2;

    assert(n1 > 0 && "���͂͐��̐����łȂ���΂����܂���");
    assert(n2 > 0 && "���͂͐��̐����łȂ���΂����܂���");

    int ans = 1;

    if (n1 == n2) {
        // �ǂ���������l�Ȃ�A�����l��Ԃ��΂���
        ans = n1;
    }
    else {
        // �S�T���͂��������Ȃ��̂ŁA
        // �ő���񐔂͑傫���ق��̐����̔����܂Ń`�F�b�N����Ώ\��
        for (auto i = 1; i <= int(std::max(n1, n2) / 2); ++i) {
            if (n1 % i == 0 && n2 % i == 0) {
                ans = i;
            }
        }
    }

    std::cout << ans << std::endl;
}

// �ő����
// 15 �� 24 �Ȃ� 3