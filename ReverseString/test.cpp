#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100], revstr[100];
  	int i, j, index, len, startIndex, endIndex;
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	
  	len = strlen(str);
  	index = 0;
  	endIndex = len - 1;
  	
  	printf("\n *****  Given String in Reverse Order  ***** \n"); 	   	
  	for(i = len - 1; i > 0; i--)
	{
		if(str[i] == ' ')
		{
			startIndex = i + 1;

			for(j = startIndex; j <= endIndex; j++)
			{
				revstr[index] = str[j];
				index++;
			}
			revstr[index++] = ' ';
			endIndex = i - 1;				
		} 
	}

//	for(i = 0; i <= endIndex; i++)
//	{
//		revstr[index] = str[i];
//		index++;
//	}
	revstr[index] = '\0';
	printf("\n Given String in Reverse Order = %s", revstr); 
  	return 0;
}
