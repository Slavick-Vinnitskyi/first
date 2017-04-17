#include <iostream>
#include <stdlib.h>

using namespace std;

int main (int argc, char* argv[])
{
    srand(time(NULL));
    int temp, a = 0; cin >> a;
    int* mas = new int[a];
    for(int i=0 ; i < a; i++)
    {
        mas[i] = rand() % 100 + 1; // 1...100   
    }
    cout<< "There are the random massive of "<< a<< " elements: ";
    for(int j=0;j<a;j++)
    {
        cout<< mas[j]<<" ";
    }cout<<endl;
   for(int i = 0 ; i < a; i++)
   {     
   for(int k = 0 ; k < a - 1; k++ )
    {
     if(mas[k] > mas[k+1])
        {
        temp = mas[k];             
        mas[k] = mas[k+1];
        mas[k+1] = temp;

        }
    }
   }
   cout<< "There are the sorted massive of "<< a<< " elements: ";
    for(int j=0;j<a;j++)
    {
        cout<< mas[j]<<" ";
    }cout<<endl;
delete [] mas;
}