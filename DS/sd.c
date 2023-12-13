#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
char setalpabets[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int bitset1[26], bitset2[26],result[26],c1[26],c2[26];

void intialize(int set[26])
{
	for(int i=0;i<26;i++)
		set[i]=0;
}
int search(char letter)
{
	for(int i=0;i<26;i++)
	{
		if(setalpabets[i]==letter)
		{
			return i;	
		}
	}
}
 int unionset()
{
	int i;
	
	for(i=0;i<26;i++)
	{
	  result[i]=bitset1[i]|bitset2[i];
			
	}
	for(i=0;i<26;i++)
	{
		printf("%d",result[i]);
	}
}
 int intersectionset()
{
	int i;
	
	for(i=0;i<26;i++)
	{
	   result[i]=bitset1[i]&bitset2[i];
			
	}
	for(i=0;i<26;i++)
	{
		printf("%d",result[i]);
	}
}
 int  complementset()
{
	int i;
	
	for(i=0;i<26;i++)
	{
	    if(bitset1[i]==1)
           {
                c1[i]=0;
           } 
           else
           {
                c1[i]=1;
           }
		printf("%d",c1[i]);
	   		
	}
	
}
int  complementset2()
{
	int i;
	
	for(i=0;i<26;i++)
	{
	    if(bitset2[i]==1)
           {
                c2[i]=0;
           } 
           else
           {
                c2[i]=1;
           }
		printf("%d",c2[i]);
	   		
	}
	
}
int differenceset()
{
	int i;
	for(i=0;i<26;i++)
	{
	   result[i]=bitset1[i]&c2[i];
			
	}
	for(i=0;i<26;i++)
	{
		printf("%d", result[i]);
	}
	
}
int setarray(char setalpabets[26],int result[26])
{
	int i;
	printf("{");
	for(i=0;i<26;i++)
	{
		if(result[i]==1)
		{
			printf("%s",setalpabets[i]);
		}
	}
	printf("}");
}
	
	
int main()
{
 	char set1[26],set2[26];
	int result,i,n,m,j,indx,c;
	printf("Enter the size of first set:");
	scanf("%d",&n);
	printf("Enter the elments of first set:");
	for(i=0;i<n;i++)
	{
		scanf("%s",&set1[i]);
		
	}
	for(i=0;i<26;i++)
	{
		set1[i]=toupper(set1[i]);
	}
	printf("Enter the size of second set:");
	scanf("%d",&m);
	printf("Enter the elments of second set:");
	for(i=0;i<m;i++)
	{

		scanf("%s",&set2[i]);
	}
	for(i=0;i<26;i++)
	{
		set2[i]=toupper(set2[i]);
	}
	
	intialize(bitset1);
	
	for(j=0;j<26;j++)
	{
		indx = search(set1[j]);
		bitset1[indx] = 1;
		
	}
	printf("The bit vector of set1:\n");
	for(i=0;i<26;i++)
	{
		printf("%d",bitset1[i]);
	}
	printf("\n");

	intialize(bitset2);
	
	for(j=0;j<26;j++)
	{
		indx = search(set2[j]);
		bitset2[indx] =1;
		
	}
	printf("The bit vector of set2:\n");
	for(i=0;i<26;i++)
	{
		printf("%d",bitset2[i]);
	}
	while(1)   
    {  
        
        printf("\n1.UNION\n2.INTERSECTION\n3.COMPLEMENT OF SET 1\n4.COMPLEMENT OF SET 2\n5.SET DIFFERENCE\n6.Exit");  
        printf("\nSelect the options\n");         
        scanf("%d",&c); 	 
        switch(c)  
        {  
            case 1:  	
			printf("\nUNION OPERATION\n");
			unionset();
			setarray(setalpabets,result);
            		break;

            case 2:  
                    	printf("\nINTERSECTION OPERATION\n");
                      	intersectionset(); 
                     	break;

           case 3:  	
			
                    	printf("\nCOMPLEMENT OPERATION OF SET 1\n");
			complementset(bitset1,c1);
		        break;

            case 4:
			
                    	printf("\nCOMPLEMENT OPERATION OF SET 2\n");
			complementset2(bitset2,c2);
             		break;  
            
            case 5: 
                  	 printf("\nSET DIFFERENCE OPERATION OF SET 1 and SET2\n");
			 
                   	 differenceset(bitset1,c2);
                         break;

	       

            case 6:	
			printf("\nEXITPOINT\n");
                    	exit(0);  
                    	break;
			 
            default:	
			printf("\nwrong input..\n");  
        }  
    }  	
	return 0;

			
}

	

			
