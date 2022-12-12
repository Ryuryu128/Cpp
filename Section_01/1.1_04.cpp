#include <iostream> // cout, cin, endl, ...
#include <cstdio> // printf

// cin => console in
// cout => console out
// endl => end line

int main()
{
    // using namespace std; 를 선언하면 선언된 {}내부에서는 std::를 쓰지 않아도 컴파일러가 알아서 파악하고 코드를 실행시켜준다.


    std::cout << "Hello World" << std::endl;
    std::cout << "hello world\n\n\n";

    int x = 1024;
    double pi = 3.141592;

    std::cout << "x is " << x << std::endl;

    std::cout << "abc" << "\t" << "def" << std::endl;
    std::cout << "ab" << "\t" << "cdef" << std::endl;

    return 0;
}