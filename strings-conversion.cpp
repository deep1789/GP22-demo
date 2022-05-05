#include<stdio.h>
#include<math.h>
int main()
{
	
	char str1[50], str2[50];
	int i=0,count=0;
	printf("\nEnter any string\n");
	scanf("%[^\n]s",str1); //scanset
	
	printf("You entered = %s",str1);
	
	while(str1[i] != '\0')
	{
		
		if(str1[i]>=97 && str1[i]<=122)
		{
		str2[i] = str1[i] - 32;
		}
		else if(str1[i]>=65 && str1[i]<=90)
		{
		str2[i] = str1[i] + 32;
		}
		else
		{
	    str2[i] = str1[i];
		}
		
		i++;
	}
	
	str2[i] = '\0';
	
	
	printf("\nAfter conversion str2 is %s",str2);
	

	
	
	return 0;
}


