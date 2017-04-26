#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char* argv[]s)
{
FILE* file = fopen("test.txt", "r");
char  word [256];
char s ;
int i = 0;
if(file!=NULL)
 {
 while((s = fgetc(file))!=EOF)
   {
   *(word+i) = s;
   i++;
   }
   cout << endl << word << endl;
   string str(word);
   cout << str << endl;
   fclose(file);
 }
}
