#include <iostream>
#include <stdio.h>
#include <string.h>
#include <iomanip>
using namespace std;

struct TMarks
{
    int Math;
    int Progr;
};
struct TStudent
{
    char FIO[12];
    char* group;
    TMarks marks;
}group, *ps;

int main ()
{
    ps = &group;
    cout << "Enter FIO and then Math, Programming scores : "; cin >> ps->FIO>>ps->marks.Math>>ps->marks.Progr;
    cout<< group.FIO<<" "<<group.marks.Math<<" "<<ps->marks.Progr<<endl;
}
   