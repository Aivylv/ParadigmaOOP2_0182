#include <iostream>
using namespace std;

// class parent
// tambahkan final sesudah nama virtual method
// untuk mencegah adanya overriding
class baseClass
{
public:
    virtual void perkenalan()
    {
        cout << "Hallo saya Function dari base class";
    }
};

class derivedClass : public baseClass
{
public:
    void perkenalan()
    {
        cout << "Hallo saya Function dari derived";
    }
};

int main()
{
    derivedClass a;
    a.perkenalan();

    return 0;
}