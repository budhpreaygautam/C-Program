#include <stdio.h>
#include <string.h>
void revString(char [],int,int);
int main()
{
  	char Str[20],temp;
  	int i,j,len;
  	printf("Enter String : ");
  	gets(Str);
  	len = strlen(Str);
  	revString(Str, 0, len -1);
  	printf("\nReversed string : %s",Str);
  	return 0;
}
void revString(char Str[],int i,int len)
{
	char temp;
	temp=Str[i];
	Str[i]=Str[len-i];
	Str[len-i]=temp;
  	if (i == len/2)
		return;
  	revString(Str,i+l,len);
}
