// Recursion
/*
What is recursion
in concept of recurstion
functin can call itself
*/
/*#include <iostream>
using namespace std;

class myclass
{
public:
    int re(int n)
    {
        if (n <= 1)
        {
            return 1;
        }
        else
        {
            return n * re(n - 1);
        }
    }
};

int main()
{
    myclass ob;
    cout << ob.re(5);
}*/

#include <iostream>
using namespace std;

class x
{

public:
    int x1(int a)
    {
        int f = 1;
        if (a < 1)
        {

            return 0;
        }
        else
        {
            return a + x1(a - 1);
        }
    }
};
int main()
{
    x ob;
    cout << ob.x1(5);
}