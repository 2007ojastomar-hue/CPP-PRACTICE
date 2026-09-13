#include <iostream>
using namespace std;
int main()
{
    double a,b;
    int choice;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Enter your choice (1 for addition, 2 for subtraction, 3 for multiplication, 4 for division): ";
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<"Addition: "<<a+b<<endl;
            break;
        case 2:
            cout<<"Subtraction: "<<a-b<<endl;
            break;
        case 3:
            cout<<"Multiplication: "<<a*b<<endl;
            break;
        case 4:
            cout<<"Division: "<<a/b<<endl;
            break;
        default:
            cout<<"Invalid choice!"<<endl;
    }
    return 0;
}
