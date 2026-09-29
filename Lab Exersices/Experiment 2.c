-> Code :

#include <stdio.h>
#include <string.h>
int main()
{
    char com[100];
    printf("Enter comment: ");
    fgets(com, sizeof(com), stdin);
    if (com[0] == '/' && com[1] == '/')
        printf("It is a comment");
    else if (com[0] == '/' && com[1] == '*'
             && strstr(com, "*/"))
        printf("It is a comment");
    else
        printf("It is not a comment");
    return 0;
}

-> Ouput :

Enter comment: // h Hello
It is a comment
