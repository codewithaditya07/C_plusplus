// Return type parametre revese number
#include <iostream>
using namespace std;
class abc
{
public:
    int rev(int x) // Reserve
    {
        int t = 0, r;
        while (x > 0)

        {
            r = x % 10;
            t = t * 10 + r;
            x = x / 10;
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
    int k = ob.rev(n);
    cout << k;
}
