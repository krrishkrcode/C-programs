#include<stdio.h>


int main()
{
  char greetings[]="Hello World.";
  int length = sizeof(greetings)/sizeof(greetings[0]);
  int i;

  for (i = 0; i<length; i++)
  {
    printf("%c",greetings[i]);
  }
  
return 0;

}

