// POLYMOREPHISM

// function overloading

/*#include<iostream>
using namespace std;
 class xyz
 {
    public:
    int adi()
    {
        int c;
        cout<<"enter any value ";
        cin>>c;
        cout<<c*c;
        return 0;
    }
    int adi(int x)
    {
        cout<<x*x*x;
        return 0;

    }
 };

 int main ()
 {
    xyz ob;
    ob.adi(5);
    return 0;
 }*/
// constructor overloading

/*#include<iostream>
using namespace std;
class parth
{
    public:
    parth()
    {
        cout<<"its non parametric cons ";
    }
    parth(int a)
    {
        cout<<"hi,its single parametric cons\n ";

    }
    parth(int a,int b)
    {
        cout<<"its multiple parametric cons\n ";

    }
};
int main()
{
    parth adi;
    parth ob (8,2);
}*/

// function overriding
#include <iostream>
using namespace std;
class parth
{
public:
    int anshul()
    {
        cout << "hii anshul of parth";
        return 0;
    }
};
class anshu : public parth
{
public:
    int anshul()
    {
        cout << " hii , i am anshul of anshu";
        return 0;
    }
};
int main()
{

    anshu ob;
    ob.anshul();
}