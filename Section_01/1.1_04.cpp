#include <iostream> // cout, cin, endl, ...
#include <cstdio> // printf

// cin => console in
// cout => console out
// endl => end line

int main()
{
    // using namespace std; 를 선언하면 선언된 {}내부에서는 std::를 쓰지 않아도 컴파일러가 알아서 파악하고 코드를 실행시켜준다.
    
    // cout를 이용한 출력
    int x = 1024;
    double pi = 3.141592;

    std::cout << "x is " << x << std::endl;

    std::cout << "abc" << "\t" << "def" << std::endl;
    std::cout << "ab" << "\t" << "cdef" << std::endl;

    // cin을 이용한 입력
    using namespace std;

    int y;
    cin >> y;

    cout << "your input is " << y;

    return 0;
}