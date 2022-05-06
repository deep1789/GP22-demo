#include<stdio.h>
#include<math.h>
int main()
{
	
	char str[1000];
	int i=0,count=0;
	printf("\nEnter any string\n");
	scanf("%[^\n]s",str); //scanset
	
	printf("You entered = %s",str);
	
	while(str[i] != '\0')
	{
		
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			
			printf("\nvowel = %c found in the string",str[i]);
			count++;
			
		}
		
		i++;
	
		
	}
	
	printf("\nTotal vowels in %s = %d",str,count);
	

	
	
	return 0;
}


