#include <iostream>
using namespace std;
int main()
{
    cout<<"Welcome to the food menu"<<endl;
    cout<<"===========FOOD MENU==========="<<endl;
    cout<<"1.Pizza"<<endl;
    cout<<"2.Burger"<<endl;
    cout<<"3.Pasta"<<endl;
    cout<<"4.Salad"<<endl;
    cout<<"5.Sandwich"<<endl;
    int choice;
    cout<<"Enter your choice: "<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<"You have selected Pizza"<<endl;
            break;
        case 2:
            cout<<"You have selected Burger"<<endl;
            break;
        case 3:
            cout<<"You have selected Pasta"<<endl;
            break;
        case 4:
            cout<<"You have selected Salad"<<endl;
            break;
        case 5:
            cout<<"You have selected Sandwich"<<endl;
            break;
        default:
            cout<<"Invalid choice!"<<endl;
    }
    return 0;
}