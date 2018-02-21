/* 
In the terminal : 

nc shell2017.picoctf.com 51091
*/

/*
The question : 

To prove your skills, you must pass this test.
Please give me the 'A' character '730' times, followed by a single '7'.
To make things interesting, you have 30 seconds.
*/

#include <stdio.h>

int main()
{
   int i=0;
   
   for(i=0; i<730; i++){
       printf("A");
   }
   printf("7");

    return 0;
}
