//copy constructor
#include<iostream>
using namespace std;

class madhav 
{
    public :
    int a=5,b=0;
    madhav()
    {
        cout<<"hii\n"<< a+b ;

    }
    int anshul()
    {
        cout<<"\nhii i am anshul";
    }

};

class adi
{
    public:
    adi(madhav ob)
    {
        ob.anshul();
        //ob.a=2;
        //ob.b=6;

    }
};
int main ()
{
    madhav ob1;
    adi ob(ob1);


}