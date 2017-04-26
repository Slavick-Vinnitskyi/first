#include <iostream>
#include <stdio.h>
#include <string.h>
#include <iomanip>
using namespace std;

struct  TList
{  int  Data;
   TList *Next;
   TList *Prev;
} *curr, *head, *last;
   char ch; 
   

int main()
{
  TList  *head=NULL; 
do 		
{ curr = new TList;
   cin >> curr->Data;
   curr->Next = NULL;
   if (head == NULL) 
   { head = curr;
      curr->Prev = NULL;
   }
   else 
   { last->Next = curr;
      curr->Prev = last;
   }
   last = curr;
   cout<<"Continue? (Y/N)";  
   cin>>ch;
}
while ((ch!='n')&&(ch!='N')); 

}