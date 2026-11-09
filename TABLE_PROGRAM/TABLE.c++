#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter the number for which u want to get the table: ";
    int a;
    cin>>a;
    int i=1;
    while(i<=10)
    {
        cout<<a<<"*"<<i<<"="<<a*i<<endl;
        i++;
    }
    return 0;
}
