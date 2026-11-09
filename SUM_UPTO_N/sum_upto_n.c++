#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number n to get sum upto n: ";
    cin>>n;
    int sum=0;
    while(n>=1)
    {
        sum+=n;
        n--;
    }
    cout<<sum<<endl;
    return 0;
}
