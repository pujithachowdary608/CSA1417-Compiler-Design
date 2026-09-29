-> Code :

#include <stdio.h>
#include <ctype.h>
int main()
{
    char b[100];
    int i;
    printf("Enter the string: ");
    scanf(" %[^\n]", b);
    printf("Identifiers: ");
    for (i = 0; b[i]; i++)
        if (isalpha(b[i]))
            printf("%c ", b[i]);
    printf("\nConstants: ");
    for (i = 0; b[i]; i++)
        if (isdigit(b[i])) {
            while (isdigit(b[i])) {
                printf("%c", b[i++]);
            }
            printf(" ");
            i--;
        }
    printf("\nOperators: ");
    for (i = 0; b[i]; i++)
        if (b[i] == '+' || b[i] == '-' ||
            b[i] == '*' || b[i] == '=')
            printf("%c ", b[i]);
    return 0;
}


-> Output :

Enter the string: a=b+c*e+d+250
Identifiers: a b c e 
Constants: 250 
Operators: = + * + 
