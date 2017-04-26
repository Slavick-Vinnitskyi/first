//Merge sort
#include <iostream>
#include <stdlib.h>

using namespace std;

int main (int argc, char* argv[])
{
    srand(time(NULL));
    int temp, capacity = 0; cin >> capacity;
    int* mas = new int[capacity];
    for(int i=0 ; i < capacity; i++)
    {
        mas[i] = rand() % 100 + 1; // 1...100   
    }
    cout<< "There are the random massive of "<< capacity << " elements: ";
    for(int j = 0;j < capacity; j++)
    {
        cout<< mas[j]<<" ";
    }cout<<endl;
    int half = capacity/2; //cout<< half <<" "<<capacity - half;
   for(int i = 0; i < half; i++ )
   {
       cout << mas[i] << " ";
   }cout << endl;
   for(int i = half; i < capacity; i++)
   {
      cout << mas[i] << " ";
   }cout << endl;






}