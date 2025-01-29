#include <iostream>
using namespace std;

class tt
{
public:
    virtual int adi(int a) = 0;
    virtual int kk(int k) = 0;
};
class aaa : public tt
{
public:
    int adi(int a)
    {
        cout << "\n adi " << a * a;
        return 0;
    }
    int kk(int k)
    {
        cout << " \n hii kk " << k + k;
        return 0;
    }
    int jii()
    {
        cout << " \n i am jii";
        return 0;
    }
};
int main()
{
    aaa ob;
    ob.adi(2);
    ob.kk(5);
    ob.jii();
}
