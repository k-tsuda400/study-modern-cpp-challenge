#include <iostream>
#include <cassert>

//int main()
//{
//    int n1;
//    int n2;
//    std::cin >> n1;
//    std::cin >> n2;
//    
//    assert(n1 > 0 && "���͂͐��̐����łȂ���΂����܂���");
//    assert(n2 > 0 && "���͂͐��̐����łȂ���΂����܂���");
//
//    int small = (n1 >= n2) ? n2 : n1;
//    int big = (n1 >= n2) ? n1 : n2;
//    
//    int ans = 1;
//    
//    if (n1 == n2) {
//        // �ǂ���������l�Ȃ�A�����l��Ԃ��΂���
//        ans = n1;
//    }
//    else if (big % small == 0) {
//        ans = big;
//    }
//    else {
//        ans = n1 * n2;
//    }
//    
//    std::cout << ans << std::endl;
//}