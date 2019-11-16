#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string name;
    int score;

public:
    Student(string n, int s)
    {
        name = n;
        score = s;
    };
    void show() { cout << name << " : " << score << "점\n" ;}
};

int main(void)
{
    Student a = Student("나동빈", 100);
    a.show();
    system("pause");
}