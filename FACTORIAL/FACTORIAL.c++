#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number for which u want to have factorial: ";
    cin>>a;
    int b=1;
    while (a>1)
    {
        b=b*a;
        a--;
    }
    cout<<b;
return 0;
}