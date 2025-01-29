// class and obejct
/*#include <iostream>
using namespace std;
class my_cls
{

public:
    int kk()
    {
        int x, y;
        for (x = 1; x <= 5; x++)
        {
            for (y = 1; y <= x; y++)
            {
                cout << "*";
            }
            cout << "\n";
        }
    }
};
int main()
{

    // Create instance/object of Class
    my_cls ob;
    ob.kk();
    ob.kk();
    return 0;
}*/
/*
//single inheritance

 #include<iostream>
using namespace std;
class one
{
public:
int myf1()
{
cout<<"\nHello i am Myf1";
}

int myf2()
{
cout<<"\nHello i am myf2";
}
};

class two:public one
{
public:
int myf3()
{
cout<<"\nHi, i am myf3";
}

int myf4()
{
cout<<"\nHi, I am myf4";
}

};

int main()
{

two ob;
ob.myf1();
ob.myf2();
ob.myf3();
ob.myf4();
return 0;
}
*/
// Multilevel inheritance

#include <iostream>
using namespace std;
class x
{
public:
    int k1()
    {
        cout << "\nHi i am k1 of x\n";
        return 0;
    }
};
class y : public x
{
public:
    int k2()
    {
        cout << "\n Hi I am K2 of y";
        return 0;
    }
};

class z : public y
{
public:
    int k3()
    {
        cout << "\n Hi , i am k3 of z";
        return 0;
    }
};

class a : public z
{
public:
    int k4()
    {
        cout << "Hi i am k4 of a";
        return 0;
    }
};

int main()
{

    a ob;
    ob.k4();
    ob.k1();
    ob.k2();
    ob.k3();

    return 0;
}

/*
//Multiple inheritance

#include<iostream>
using namespace std;
class x
{
public:
int k1()
{
cout<<"\nHi i am k1 of x\n";
return 0;
}

};
class y
{
public:
int k2()
{
cout<<"\nHi I am K2 of y";
return 0;
}

};

class z
{
public:
int k3()
{
cout<<"\nHi , i am k3 of z";
return 0;
}

};

class a:public x,public y, public z
{
public:
int k4()
{
cout<<"\nHi i am k4 of a";
return 0;
}
};

int main()
{

a ob;
ob.k1();
ob.k2();
ob.k3();
ob.k4();


return 0;
}
*/