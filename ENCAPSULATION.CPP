// ENCAPSULATION
#include <iostream>
using namespace std;

class parth
{
private:
    int x, y, z;

public:
    parth(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

private:
    int op() // opration
    {
        this->z = this->x + this->y;
        return 0;
    }

public:
    int show()
    {
        op();
        cout << this->z;
        return 0;
    }
};

int main()
{
    parth ob(90, 100);
    ob.show();
}
