#include<stdio.h> 
int main() 
{ 
	int num1[100],num2[100],sum[100]; 
	char n1[100],n2[100]; 
	int l1,l2;  
	printf("Enter Number:"); 
	scanf("%s",&n1); 
	printf("Enter Number:"); 
	scanf("%s",&n2); 
	for(l1=0; n1[l1]!='\0'; l1++)
	{
		num1[l1] = n1[l1]-'0'; 	
	} 
	for(l2=0; n2[l2]!='\0'; l2++) 
	{
		num2[l2] = n2[l2]-'0';
	}  
	int carry = 0; 
	int k = 0; 
	int i = l1 - 1; 
	int j = l2 - 1; 
	for (i,j,k; i>=0 && j>=0; i--, j--, k++) 
	{ 
		sum[k] = (num1[i]+num2[j]+carry) % 10; 
		carry = (num1[i]+num2[j]+carry) / 10; 
	} 
	if(l1>l2) 
	{ 
		while(i>=0) 
		{ 
			sum[k++] = (num1[i]+carry) % 10; 
			carry = (num1[i--]+carry) / 10; 
		} 
	} 
	else if(l1<l2) 
	{ 
		while(j>=0) 
		{ 
			sum[k++] = (num2[j]+carry) % 10; 
			carry = (num2[j--]+carry) / 10; 
		} 
	} 
	else 
	{ 
		if(carry>0)
		{
			sum[k++] = carry; 	
		} 
	}  
	printf("sum = "); 
	for(k--; k>=0; k--)
	{
		printf("%d", sum[k]);
	}  
	return 0; 
} 
