#include "Definition.h"
#include <stdio.h>

extern int Readline(),CountWord(),CountsUpdate(int LineChars,int LineWords);


char Line[MaxLine];  /* one line from the file */


int NChars = 0,  /* number of characters seen so far */
    NWords = 0,  /* number of words seen so far */
    NLines = 0,  /* number of lines seen so far */
    LineLength;  /* length of the current line */ 


int main()  
{
//Please implement your code here 

LineLength = 0;
int LineChars = Readline();
int LineWords;

while (LineChars > 0)
	{
	LineWords = CountWord();
	CountsUpdate(LineChars, LineWords);
	LineChars = 0;
	LineWords = 0;

//uncomment below listed ToString() function call, to print the text of the file to the screen 
//ToString();

	LineChars = Readline();

	}

printf("Number of chars: %d \n", NChars);
printf("Number of words: %d \n", NWords);
printf("Number of lines: %d \n", NLines);

return 0;
}
