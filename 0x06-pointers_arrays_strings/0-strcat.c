#include <stdlib.h>
#include <stdio.h>

#ifndef MAIN_H
#define MAIN_H
/**
 *main - check the code
 *
 *Return: Always 0 (Success)
 */



#endif

char *con(char *a, char *b)
{
   int i;
   for (i=0; a[i] != '\0'; i++)
	   ;

   for (int j=0; b[j] !='\0'; j++)
      {
        a[i] = b[j];
	i++;
      }
   return (a);
}

int main(void) {
	  char s1[98] = "Hello ";
	  char s2[] = "World!\n";
	  char *ptr;
	 
	  ptr = con(s1, s2);
	  
	  printf("%s",ptr);
	   
	   return (0);
}
