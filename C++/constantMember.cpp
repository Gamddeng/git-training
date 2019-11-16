#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    //const int id;
    string name;

public:
    static int count;
    Person(string name) : name(name)
    {
        count++;
    }
    /*
	void setId(int id) {
		this->id = id; // 오류 발생
	}
	*/
};

int Person::count = 0;

int main(void)
{
    Person p1("나동빈");
    Person p2("홍길동");
    Person p3("아순신");
    cout << "사람의 수: " << Person::count << '\n';
    system("pause");
}