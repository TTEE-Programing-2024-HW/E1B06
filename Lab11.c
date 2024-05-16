#include <stdio.h>
#include <stdlib.h>
void countCharacters();


int main(void) 
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    for(int i=0;i<=SIZE-1;i++)
    {
        if(i==1)
        {
            printf("%s",str[i]);
            break;
        }
        else if(i>=1&&i<SIZE-1)
        {
            printf("*");
            break;
        }
        else if(i==SIZE-1)
        {
            printf("%s",str[i]);
            break;
        }



    }

    system("PAUSE");
    return 0;
}
