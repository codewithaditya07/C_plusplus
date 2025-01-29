// constructor
/*#include<stdio.h>

class x
{
    public :

x()
{
    printf("hii");
}

};
 int main ()
 {
    x ob;
    return 0;
 }*/
// Access specifire
#include <stdio.h>
class x
{
private:
    int parth()
    {
        printf(" hii parth\n");
    }

protected:
    int anshul()
    {
        printf(" hii anshul\n ");
    }

public:
    int madhav()
    {
        anshul();
        parth();
        printf(" hii madhav\n");
    }
};

int main()
{
    x ob;
    ob.madhav();
    return 0;
}
