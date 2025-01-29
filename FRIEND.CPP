// Friend fuction
#include <iostream>
using namespace std;
class parth
{
public:
    int an()
    {
        cout << "hii i am parth \n";
        return 0;
    }
    friend int adi();
};
int adi()
{
    cout << "hii parth ";
}

int main()
{
    parth ob;
    ob.an();
    adi();
    return 0;
}