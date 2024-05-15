#include <stdio.h>
#include <stdlib.h>
void countCharacters();
int length();

int length(char *ptr) 
{
    int count=0;

    while (*ptr!='\0') 
	{
        count++;
        ptr++;
    }

    return count;
}

void countCharacters(char *ptr) 
{
    int uppercase=0;
    int lowercase=0;
    int numbers=0;

    while (*ptr!='\0') 
	{
        if (*ptr>='A'&&*ptr<='Z') 
		{
            uppercase++;
        } 
		else if (*ptr>='a'&&*ptr<='z') 
		{
            lowercase++;
        } 
		else if (*ptr>='0'&&*ptr<='9') 
		{
            numbers++;
        }

        ptr++;
    }

    printf("Uppercase letters: %d\n",uppercase);
    printf("Lowercase letters: %d\n",lowercase);
    printf("Numbers: %d\n",numbers);
}

int main(void) 
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    int len=length(str);
    printf("Length of the string: %d\n",len);

    countCharacters(str);

    system("PAUSE");
    return 0;
}
