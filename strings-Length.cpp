#include<stdio.h>
#include<math.h>
int main()
{
	
	char str[1000];
	int i=0, length=0;
	printf("\nEnter any string\n");
	scanf("%[^\n]s",str); //scanset
	printf("You entered = %s",str);
	
	while(str[i] != '\0')
	{
		
		length++;
		i++;
		
	}
	
	printf("\nLength of a string = %d",length);
	

	
	
	return 0;
}


