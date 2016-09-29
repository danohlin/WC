#include "Definition.h"
#include "ExternalVar.h"
#include <stdio.h>


int Readline()
{
//Please implement your code here

int i = 0;
int c;
while ( ( (c = getchar()) != EOF ) && ( i < MaxLine - 1 ) )
	{
	Line[i] = (char)c;
	i++;
	if (c == '\n') break;
	if (i == 199) 
		{
		printf("Input Error: Individual lines in file must be under 200 characters long.\n");
		exit(1);
		}
	}

LineLength = i;
return i;

}

  

