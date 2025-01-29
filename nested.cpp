//nested function
#include<iostream>
using namespace std;

class madhav
{
    public:
    int aa()
    {
        int pp();
        cout<<"hello pp\n";

    }
    int pp();
};

int madhav::pp()
{
    cout<<"hello i am a";
    return 0;

}
int main()
{
    madhav ob;
    ob.aa();
    ob.pp();

}