#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	
	char str1[1000], str2[1000],str3[1000];
	int i=0, length=0;
	printf("\nEnter string 1\n");
	scanf("%[^\n]s",str1); //scanset
	
	fflush(stdin);
	printf("\nEnter string 2\n");
	scanf("%[^\n]s",str2); //scanset
	
	printf("\nstring 1 = %s",str1);
	printf("\nstring 2 = %s",str2);
	
	int k =0;
	while(str1[i] != '\0')
	{
		str3[k] = str1[i];
		k++;
		i++;
		
	}
	
	
	i=0;
	while(str2[i] != '\0')
	{
		str3[k] = str2[i];
		k++;
		i++;
		
	}
	
	
	str3[k] = '\0';
	
	printf("\nstr3 = %s",str3);
	

	
	
	return 0;
}


