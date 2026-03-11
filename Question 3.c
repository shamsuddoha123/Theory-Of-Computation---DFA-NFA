#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int len;

    printf("Enter a string:\n");
    gets(s);
    //s[strcspn(s, "\n")]=0;
    len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (s[i] != 'a' && s[i] != 'b' && s[i]==" ")
        {
            printf("You put wrong alphabets.\n");
            return 0;
        }
    }

    if (s[0] == 'a' && s[len - 1] == 'b')
    {
        printf("accepted\n");
    }
    else
    {
        printf("rejected\n");
    }

    return 0;
}