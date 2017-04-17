#include <stdio.h>
#include <iostream>

int main (int argc, char* argv[])
{
 FILE* file = fopen("voc.txt", "r");
char  word [1000];
char s;
string str;
int a = 0;
    if(file!=NULL)
    {
       while((s = fgetc(file))!=EOF)
        if(islower(s)) a++;
          cout<<"\n"<<a<<"\n";
      
     }
 
 fclose(file);
  }