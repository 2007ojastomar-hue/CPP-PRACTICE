#include <iostream>
#include <limits>
#include <string>
#include <iomanip>
using namespace std;
int main(){
    string Name;
    cout<<"Enter Name: ";
    getline(cin, Name);
    string University;
    cout<<"Enter University: ";
    getline(cin, University);
    int Age;
    while (true) {
        cout<<"Enter Age: ";
        cin>>Age;
        if (cin.fail()) {
            cout<<"Invalid input! please enter valid number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else {
            break;
        }
    }
    int marks1, marks2, marks3;
    while (true) {
        cout<<"ENTER MARKS FOR SUBJECT 1, SUBJECT 2 AND SUBJECT 3 (0-100): ";
        cin>>marks1>>marks2>>marks3;
        if (cin.fail()) {
            cout<<"Invalid input! please enter valid number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else {
            break;
        }
    }
    cout<<setfill('=')<<setw(50)<<"="<<endl;
    cout<<setfill(' ')<<setw(30)<<"STUDENT INFORMATION"<<endl;
    cout<<setfill('=')<<setw(50)<<"="<<endl;
    cout<<left<<"Name: "<<setfill(' ')<<setw(30)<<right<<Name<<endl;
    cout<<left<<"University: "<<setfill(' ')<<setw(30)<<right<<University<<endl;
    cout<<left<<"Age: "<<setfill(' ')<<setw(30)<<right<<Age<<endl;
    int total = marks1 + marks2 + marks3;
    double average = total / 3.0;
    cout<<setfill('=')<<setw(50)<<"="<<endl;
    cout<<setfill(' ')<<setw(22)<<"MARKS"<<endl;
    cout<<setfill('=')<<setw(50)<<"="<<endl;
    cout<<setfill(' ')<<left<<setw(20)<<"Subject"<<setw(20)<<right<<"Marks"<<endl;
    cout<<setfill(' ')<<setw(20)<<left<<"Mathematics"<<right<<setw(20)<<marks1<<endl;
    cout<<setfill(' ')<<setw(20)<<left<<"Physics"<<right<<setw(20)<<marks2<<endl;
    cout<<setfill(' ')<<setw(20)<<left<<"Programming"<<right<<setw(20)<<marks3<<endl;
    cout<<setfill(' ')<<setw(50)<<" "<<endl;
    cout<<"Total Marks: "<<setw(20)<<total<<endl;
    cout<<"Average Marks: "<<setw(20)<<fixed<<setprecision(2)<<average;
    return 0;
    }