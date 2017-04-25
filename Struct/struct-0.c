#include <iostream>
#include <stdio.h>
#include <string.h>
#include <iomanip>
using namespace std;

struct TMarks
{
    int Math;
    int Progr;
    int KL;
};
struct TStudent
{
    char FIO[12];
    char* group;
    char* adress;
    int year;
    TMarks marks;
}group[5], *ps;

int main ()
{
    ps = &group;
    char buff[5];
    cout<<"Enter the numb of group : "; cin >> buff;
    for(int i = 0; i< 5; i++ )
    {
    
        group[i].group = buff;
        cout<< "Enter the name of " << i + 1 << " student : ";cin>>group[i].FIO;//cout<<endl;
        cout<< "Enter the score in OP: "; cin>> group[i].marks.Progr;
    }
    for(int i = 0; i< 5; i++ )
    {
       cout<<setw(12)<<group[i].FIO<<" "<<group[i].group<<" OP: "<<group[i].marks.Progr<<endl;
    }

}