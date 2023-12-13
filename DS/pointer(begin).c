#include<stdio.h>
int main()
{
	int num=10;
	printf("The value num is:%d\n",num);
	printf("The address of num is:%p\n",&num);
	int *ptr;
  	ptr=&num;
	printf("The address of num is:%p\n",ptr);
	printf("The value of num is:%d through ponter",*ptr);
	return(0);
}
