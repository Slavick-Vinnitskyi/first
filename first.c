#include <stdio.h>

#define Bot_temp 0
#define Top_temp 300
#define Step 20

int main()
{
    printf("Table Celsius->Fahrengeit\n");
    printf("Celsius\tFahrengeit\n");
 for(float Cel = Bot_temp; Cel<=Top_temp;Cel+=Step)
 {
     printf("%3.0f\t%3.0f\n",Cel, (((Cel*9)/5)-32));
 } 
 
}