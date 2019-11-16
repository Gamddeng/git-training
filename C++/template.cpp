#include <iostream>
#include <string>

using namespace std;

template <typename T>
void change(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main(void)
{
    string a = "나동빈";
    string b = "홍길동";
    change(a, b);
    cout << a << ":" << b << endl;
    system("pause");
}