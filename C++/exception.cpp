#include <iostream>

using namespace std;

int main(void)
{
    int a = 7, b = 0;
    try
    {
        if (b == 0)
        {
            throw "어딜 0으로 나눌라고!";
        }
        cout << a / b;
    }
    catch (const char *str)
    {
        cout << str << '\n';
    }
    system("pause");
}