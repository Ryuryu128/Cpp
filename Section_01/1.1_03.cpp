#include <iostream>

int main()
{
    int x = 123; // initialization 초기화
    int y(123); // initialization 초기화

    x = 123; // assignment 대입

    std::cout << x << std::endl;  // 123
    std::cout << &x << std::endl;  // & ampersand => x의 메모리 주소를 나타내줌. (포인터가서 더 자세히)

    // L-value R-value
    // Left value : 메모리 주소를 갖고 있는 value
    // Right value : 메모리 어딘가에 임시적으로 저장되어 있음. 직접적으로 메모리 주소를 가져올 수 없다.
    // x = 123 => x: L-value, 123: R_value

    return 0;
}