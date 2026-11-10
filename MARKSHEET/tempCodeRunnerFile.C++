#include <iostream>
#include <limits>
#include <string>
#include <iomanip>
using namespace std;
int main() {
    cout<<setfill('=')<<setw(50)<<"="<<endl;
    cout<<setfill(' ')<<setw(30)<<"STUDENT INFORMATION"<<endl;
    cout<<setfill('=')<<setw(50)<<"="<<endl;
    string Name;
    cout<<"Enter Name: ";
    getline(cin, Name);
    string University;
    cout<<"Enter University: ";
    getline(cin, University);
    int Age;
    cout<<"Enter Age: ";
    cin>>Age;
    cin.ignore(); // To ignore the newline character left by cin
    cout<<"Name: "<<setfill(' ')<<setw(30)<<Name<<endl;
    cout<<"University: "<<setfill(' ')<<setw(30)<<University<<endl;
    cout<<"Age: "<<setfill(' ')<<setw(30)<<Age<<endl;
    int marks1, marks2, marks3;
    cout<<"Enter marks for subject 1: ";
    cin>>marks1;
    cout<<"Enter marks for subject 2: ";
    cin>>marks2;
    cout<<"Enter marks for subject 3: ";
    cin>>marks3;
    int total = marks1 + marks2 + marks3;
    double average = total / 3.0;
    cout<<setfill('=')<<setw(50)<<"="<<endl;
    cout<<setfill(' ')<<setw(30)<<"MARKS"<<endl;
    cout<<setfill('=')<<setw(50)<<"="<<endl;
    cout<<"Subject"<<setw(20)<<"Marks"<<endl;
    cout<<"Mathematics"<<setw(20)<<marks1<<endl;
    cout<<"Physics"<<setw(20)<<marks2<<endl;
    cout<<"Programming"<<setw(20)<<marks3<<endl;
    cout<<setfill(' ')<<setw(50)<<" "<<endl;
    cout<<"Total Marks: "<<setw(20)<<total<<endl;
    cout<<"Average Marks: "<<setw(20)<<fixed<<setprecision(2)<<average;
    return 0;
}