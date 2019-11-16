#include <iostream>

using namespace std;

int main(void)
{
    unique_ptr<int> p1(new int(10));
    unique_ptr<int> p2;
    //cout << *p1 << '\n';
    cout << "스마트 포인터 1: " << p1 << '\n';
    cout << "스마트 포인터 2: " << p2 << '\n';
    cout << "--- 소유권 이전 ---\n";
    p2 = move(p1);
    cout << "스마트 포인터 1: " << p1 << '\n';
    cout << "스마트 포인터 2: " << p2 << '\n';
    cout << "--- 메모리 할당 해제 ---\n";
    p2.reset();
    cout << "스마트 포인터 1: " << p1 << '\n';
    cout << "스마트 포인터 2: " << p2 << '\n';
    system("pause");
}