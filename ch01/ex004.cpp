#include <iostream>
#include <cassert>
#include <math.h> 

// �Q�l�Fhttps://qiita.com/asksaito/items/76b71602dd956b79dbf7
//bool IsPrime(int num)
//{
//    if (num < 2) return false;
//    else if (num == 2) return true;
//    else if (num % 2 == 0) return false; // �����͂��炩���ߏ���
//
//    // ������x��p����x�𖞂����f���qp������
//    // ���͈̔͂̒l�Ŋ���؂�Ȃ��Ȃ�A�f���Ɣ���ł���
//    // �Q�l�Fhttps://4engineer.net/competitive/sosu-hantei/
//    double sqrtNum = sqrt(num);
//    for (int i = 3; i <= sqrtNum; i += 2)
//    {
//        if (num % i == 0)
//        {
//            // �f���ł͂Ȃ�
//            return false;
//        }
//    }
//
//    // �f���ł���
//    return true;
//}

//int main()
//{
//    int n;
//    std::cin >> n;
//
//    assert(n > 0 && "���͂͐��̐����łȂ���΂����܂���");
//
//    int ans = n;
//
//    // �f���͕K�����݂���̂ŁA������܂Ń��[�v���񂷎����Ŗ��Ȃ�
//    while (!IsPrime(ans)) {
//        --ans;
//    }
//
//    std::cout << ans << std::endl;
//}