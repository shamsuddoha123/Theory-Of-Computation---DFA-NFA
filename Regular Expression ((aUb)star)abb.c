#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int i;
    int counta = 0, countb = 0;

    printf("Enter the string : ");
    scanf("%s", s);

    int len = strlen(s);

    // Validity check
    for (i = 0; i < len; i++)
    {
        if (s[i] == 'a')
            counta++;
        else if (s[i] == 'b')
            countb++;
        else
        {
            printf("Wrong Alphabet");
            return 0;
        }
    }

    if (counta == len - 2 && s[len - 2] == 'b'&& s[len - 1] == 'b')
        printf("Accepted\n");
    else if (countb == len - 1 && s[len - 3] == 'a')
        printf("Accepted\n");
    else
        printf("Rejected\n");

    return 0;
}
