#include <iostream>
#include <stdio.h>
#include <string.h>
#include <iomanip>
using namespace std;

struct TList
{
    int data; 
    TList *next;
};
TList *current, *tail;
char value;
int main ()
{
    TList *head= NULL;
    char c;
    do
    { 
    current = new TList;
    cin >> current -> data;
    current ->next = NULL;
    if (head == NULL) head = current;
    else tail -> next = current;
    tail = current;
    cout << "Continue? (Y/N)"; cin>>c;
    }
    while((c!='n')&&(c!='N'));
        TList* p;
        while (p != NULL) 
        {
        cin >> value;
        if (p->data == value)
        {
        cout<<p->data;
        break;
        }
        p = p->next;
         
        } 
      
}