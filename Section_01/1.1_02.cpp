#include <iostream>

int main()
{
    // 주석: 컴파일러가 컴파일 하지 않도록, 무시하도록 하는 문법.
    /* */

    // 주석을 달 때는 무엇을 할지, 왜 주석을 다는지, 어떻게 구현하는 건지 등을 설명하려고 노력해야 함.
    // 최근 프로그래머들이 시간을 아끼기 위해 사람이 볼 때 편안한 방식으로 프로그래밍하는 것이 유행이다. 이걸 유념하고 주석달기.
    // 코드를 보고 직접적으로 알 수 있는 정보는 굳이 주석처리하지 않는다.
    // 흐름을 파악해야 알 수 있는 정보들을 남겨주면 도움이 됨.

    int x = 2; 
    x = 5;
    int y = x + 3;
    
    std::cout << y << std::endl;

    return 0;
}