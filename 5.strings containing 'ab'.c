#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int flag = 0;
    int i;

    scanf("%s", s);

    int len = strlen(s);
    for (i = 0; i < len - 1; i++)
    {
        if (s[i] == 'a' || s[i] == 'b')
        {
            flag = 1;
            if (s[i] == 'a' && s[i + 1] == 'b')
            {
                flag = 1;
                break;
            }
        }
        else
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("accept\n");
    }
    else
    {
        printf("Rejected\n");
    }

    return 0;
}