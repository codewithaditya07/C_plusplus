// Armstrong number
/*#include <iostream>
using namespace std;
class abc
{
public:
    int arm(int x)
    {
        int t = 0, r, n = x;
        while (x > 0)

        {
            r = x % 10;
            t = t + r * r * r;
            x = x / 10;
        }
        if (t == n)
            cout << "Yes it is an Armstrong ";
        else
        {
            cout << "Not it is not an Armstrong ";
        }
        return t;
    }
};
int main()
{
    abc ob;
    int n;
    cout << "Enter any value ";
    cin >> n;
    int k = ob.arm(n);
    cout << k;
}*/

#include <iostream>
using namespace std;
class xyz
{
public:
    int arm(int x)
    {
        int s = 0, r, n = x;
        while (x > 0)
        {
            r = x % 10;
            s = s + r * r * r;
            x = x / 10;
        }
        if (s == n)
{
            cout << "it is armstrong ";
            mag(s);
}
        else
        {
            cout << "it is not armstrong ";
            mag(s);
        }
        return 0;
    }
    int mag(int x)
    {
        int s = 0;
        for(int a = x;a > 0;)
        {
            int r = a% 10;
            int f = 1;
            while (r>0)
            {
                f = f*r;
                r--;
            }
            s = s+f;
            a = a/10;
        }
        if (s==x)
        {
            cout<<" mag";
        }
        else
        {
            cout <<" not magic";
        }
        return 0;
    }
};
int main()
{
    xyz ob;
    ob.arm(153);
    // int n;
    // cout << " enter any value ";
    // cin >> n;
    // int k = ob.arm(n);
    // cout << k;
}