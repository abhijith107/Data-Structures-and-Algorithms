
#include <stdio.h>

#define O 0
#define I 1
int main(void)
{
	char str[50];
	int i;
	printf("Enter the string:\n");
    scanf("%[^\n]s", str);
    int state = O;
	unsigned wc = 0; 
	 for (i = 0;str[i] != '\0';i++)
	{
		
		if (*str == ' ' || *str == '\n' || *str == '\t')
			state = O;

		
		else if (state == O)
		{
			state = I;
			wc++;
		}

		
	
	}
	printf("No of words : %d", wc);
	return 0;
}

