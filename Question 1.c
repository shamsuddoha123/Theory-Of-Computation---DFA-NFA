#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];

    printf("Enter the string : ");
    scanf("%s", s);

    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (s[i] != '0' && s[i] != '1')
        {
            printf("You put wrong alphabets.\n");
            return 0;
        }
    }
    
    if (s[0] == '0' && len % 2 != 0)
    {
        printf("Accepted\n");
    }
    else if (s[0] == '1' && len % 2 == 0)
    {
        printf("Accepted\n");
    }
    else
    {
        printf("Rejected\n");
    }

    return 0;
}