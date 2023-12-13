#include<stdio.h>
#include<string.h>
#define max 100
int top,stack[max];
void push(char x)
{
	if(top==max-1)
	{
		printf("Stack overflow");

	}
	else
	{
		stack[++top]=x;
	}
}
void pop()
{
	printf("%c",stack[top--]);

}
int main()
{
	char str[]="hello hai";
	
	int i,len;
	len=strlen(str);
	printf("The given string is:");
	for(i=0;i<=len;i++)
	{
		
                push(str[i]);
		printf("%c",str[i]);
	}
		printf("\nReverse is:");
		for(i=0;i<=len;i++)
		{
			pop();
		}
	
}

