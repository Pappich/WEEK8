#include<stdio.h> 
#include<string.h>
int main() 
{
	char num1[100],num2[100],s[100];
	int i,j,k,l1,l2,sum,carry=0;
	printf("Enter Number:"); 
	scanf_s("%s", &num1);
	printf("Enter Number:"); 
	scanf_s("%s", &num2); 
	l1 = strlen(num1);
	l2 = strlen(num2);
	i = l1-1;
	j = l2-1;
	if(l1>l2)
	{
		k = l1;
	}
	else
	{
		k = l2;
	}
	s[k] = '\0';
	k--;
	while(i>=0 && j>=0)
	{
		sum = (num1[i]-48)+(num2[j]-48)+carry;
		s[k] = sum%10+48;
		carry = sum/10;
		i--;
		j--;
		k--;
	}
	if(i>=0)
	{
		while(i>=0)
		{
			sum = num1[i]-48+carry;
			s[k] = sum%10+48;
			carry = sum/10;
			i--;
			k--;
		}
	}
	else if(j>=0)
	{
		while(j>=0)
		{
			sum = num2[i]-48+carry;
			s[k] = sum%10+48;
			carry = sum/10;
			j--;
			k--;
		}
	}
	if(carry>0)
	{
		for(i=strlen(s);i>=0;i--)
		{
			s[i+1] = s[i];
			s[0] = carry+48;
		}
	}
	printf("sum = %s",s);
	return 0;
}

