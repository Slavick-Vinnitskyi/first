#include <iostream>
#include <stdio.h>
#include <string.h>

#define STUDENTS 3

using namespace std;

int main(void)
{
  typedef struct 
  {
   string name;
   string house;   
  }student;

 student students[STUDENTS];
 for(int i=0 ;i<STUDENTS;i++)
 {
 printf("Student`s name: ");
 cin >> students[i].name ;

 printf("Student`s house: ");
 cin >> students[i].house ;
 }

 for(int i=0;i<STUDENTS;i++)
 { 
    printf("%s is live in %s\n", students[i].name, students[i].house);
 }

}