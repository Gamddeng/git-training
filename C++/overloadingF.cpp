#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    string name;

public:
    Person() { name = "루팡"; }
    Person(string name) : name(name) {}
    void showName() { cout << "이름: " << name << '\n'; }
};

int main(void)
{
    Person person1;
    person1.showName();
    Person person2("나동빈");
    person2.showName();
    system("pause");
}