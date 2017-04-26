//Множинні типи - 0 
#include <set>
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <iomanip>

using namespace std; 
int main(int argc, char* argv[])
{
    srand(time(NULL));
    int n = 0 ; 
    cin >>setw(3)>> n;
    int* data = new int [n];
   
     for(int i = 0 ; i< n ;i++)
    {
        data[i] = rand()%100+1;
        cout<<setw(3) << data[i]<<" ";
    }cout<<endl;

    set <int> Set(data,data+40);
    set <int>::iterator it;
    for( it = Set.begin(); it!=Set.end();++it)
    {
        cout <<setw(3)<< *it <<" ";
    }cout<<endl;
    for(int i = 0 ; i < 21; i++)
    {
        Set.erase(i);
    }


     for( it= Set.begin(); it!=Set.end();++it)
    {
        cout <<setw(3)<< *it <<" ";
    }cout<<endl;
    

}
   