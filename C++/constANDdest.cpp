#include <iostream>
#include <string>

using namespace std;

class Character
{
private:
    string name;
    int ragePoint;
    int hp;
    int damage;

public:
    Character(string name, int hp, int damage) : name(name), ragePoint(0), hp(hp), damage(damage) {}
    Character(const Character &other)
    {
        name = other.name;
        ragePoint = other.ragePoint;
        hp = other.hp;
        damage = other.damage;
    }
    ~Character() { cout << "freedom!" << '\n'; }
    void pointUp() { ragePoint++; }
    void show()
    {
        cout << name << "[" << ragePoint << "]" << hp << " " << damage << '\n';
    }
};

int main(void)
{
    Character lime1 = Character("슬라임", 50, 10);
    lime1.pointUp();
    Character lime2(lime1);
    lime2.pointUp();
    lime1.show();
    lime2.show();
    system("pause");
}