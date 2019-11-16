#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void)
{
    map<string, int> m;
    m["나동빈"] = 1;
    m["홍길동"] = 2;
    m["이순신"] = 3;
    map<string, int>::iterator iter = m.begin();
    for (; iter != m.end(); iter++)
    {
        cout << iter->first << ":" << iter->second << '\n';
    }
    m["이태일"] = 4;
    cout << m["없는 사람"] << '\n';
    iter = m.begin();
    for (; iter != m.end(); iter++)
    {
        cout << iter->first << ":" << iter->second << '\n';
    }
    system("pause");
}