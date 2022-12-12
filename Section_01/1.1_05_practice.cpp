#include <iostream>

using namespace std;

// 사용자의 입력을 받는 함수
int CinInt()
{
    int x;
    cin >> x;

    return x;
}


int AddTwoNumbers()
{
    int x = CinInt();
    int y = CinInt();

    int sum = x + y;
    return sum;

}

int main()
{
    int number = AddTwoNumbers();
    cout << number << endl;

    return 0;
}