#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	
	char str1[1000], str2[1000];
	int i=0, len1=0, len2=0;
	printf("\nEnter string 1\n");
	scanf("%[^\n]s",str1); //scanset
	
	fflush(stdin);
	printf("\nEnter string 2\n");
	scanf("%[^\n]s",str2); //scanset
	
	printf("\nstring 1 = %s",str1);
	printf("\nstring 2 = %s",str2);
	
	while(str1[i] != '\0')
	{
		len1++;
		i++;
		
	}
	
	i=0;
	while(str2[i] != '\0')
	{
		len2++;
		i++;
	}
	
	printf("\nlength of string 1 = %d",len1);
	printf("\nlength of string 2 = %d",len2);
	
	i=0;
	if(len1==len2)
	{
		while(i<len1)
		{
			if(str1[i] == str2[i])
			i++;
			
			else
			break;
		}
		
		if(i==len1)
		printf("\nSTRINGS ARE EQUAL");
		else
		{
			if(str1[i]>str2[i])
			printf("\nSTRING 1 IS BIGGER THAN STRING 2");
			else
			printf("\nSTRING 2 IS BIGGER THAN STRING 1");
			
		}
		
	}
	else
	{
	
			if(str1[i]>str2[i])
			printf("\nSTRING 1 IS BIGGER THAN STRING 2");
			else
			printf("\nSTRING 2 IS BIGGER THAN STRING 1");
	}
	
	printf("\nprogram ended...");
	
	
	return 0;
}


