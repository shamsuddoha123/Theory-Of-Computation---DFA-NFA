#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    char stack[100];
    int top = -1;

    printf("Enter the string: ");
    scanf("%s", s);

    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i] != 'a' && s[i] != 'b')
        {
            printf("You put wrong alphabets\n");
            return 0;
        }

        if (top == -1)
        {
            stack[++top] = s[i];
        }
        else if ((stack[top]=='a' && s[i]=='b') || (stack[top]=='b' && s[i]=='a'))
        {
            //pop
            top--;
        }
        else
        {
            //push
            stack[++top] = s[i];
        }
    }

    if (top == -1)
    {
        printf("Accepted\n");
    }    
    else
    {
        printf("Rejected\n");
    }

    return 0;
}