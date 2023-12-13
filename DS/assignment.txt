question:1[encode and decode]
-------------
#include <stdio.h>
#include <string.h>

char alphebets[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};


void encode(char plaintext[], char encoded_text[], int k)
{
	//plaintext: An array that contains the original text
	//encoded_text: Store the encoded text in this array
	//k: (number) an encoding key to specify 'k' places farther down the alphabet
        int i,j,a;
        for(i=0;i<strlen(plaintext);i++)
        {
		for(j=0;j<26;j++)
		{
			if(plaintext[i]==alphebets[j])
			{
				a=(j+k)%26;
				encoded_text[i]=alphebets[a];
				break;
                	}
		}
        }
}

void decode(char encoded_text[], char plaintext[], int k)
{
	//encoded_text: An array that contains encoded text
	//plaintext: An array to store the decoded text
	//k: (number) a decoding key

	 int i,j,a;
        for(i=0;i<strlen(plaintext);i++)
        {
		for(j=0;j<26;j++)
		{
			if(encoded_text[i]==alphebets[j])
			{
				a=(j-k)%26;
				plaintext[i]=alphebets[a];
				break;
                	}
		}
        }
}
int main()
{
    // DO NOT MODIFY/DELETE THE BELOW CODES

    // Variable Declarations
    char text[] = "hello world"; // Original Text
    int k = 3; //encoding and decoding key
    char encoded_text[strlen(text)], plaintext[strlen(text)]; //Array to store encoded text and plaintext
  
    //Function Calls
    encode(text, encoded_text, k);
    printf("Encoded text is: %s\n", encoded_text);
    decode(encoded_text, plaintext, k);
    printf("Original text is: %s\n", plaintext);
    return 0;
}






Question:2[reverse using stack]
__________


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


