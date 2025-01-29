/*#include <iostream>
using namespace std;

// Base class (Parent Class)
class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

// Derived class (Child Class)
class Dog : public Animal {
public:
    void bark() {
        cout << "The dog barks." << endl;
    }
};

int main() {
    // Creating an object of the derived class
    Dog ob;

    // Calling methods from the parent class (inherited)
    ob.eat();

    // Calling method from the child class
    ob.bark();

    return 0;
}*/

/*#include<iostream>
using namespace std;
class  animal
{
public:
int eat()
{
    cout<<" animal eat\n";

}
};
class dog:public animal
{
    public:
    int bark(){
        cout<<"dog bark";

    }
};
int main(){
dog ob;
ob.eat();
ob.bark();
return 0;
}*/

#include <iostream>
using namespace std;
class adi
{
private:
    int anshul()
    {

        cout << "enter any value\n";
    }

protected:
    int parth()
    {

        cout << "enter =\n";
    }

public:
    int madhav()
    {
        anshul();
        parth();

        cout << "en=\n";
    }
};
int main()
{
    adi ob;
    ob.madhav();

    return 0;
}