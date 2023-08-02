/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int len;
    int i;
    
    i = 1;
    len = 1;
    while (argv[1][i])
    {
        if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            len++;
        len++;
        i++;
    }
    i = 0;
    char *str = (char *)malloc(len + 1);
    str[len] = 0;
    if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
    {
        *str = argv[1][i] + 32;
        str++;
        i++;
    }
    while (argv[1][i])
    {
        if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
        {
            *str = '_';
            str++;
                *str = argv[1][i] + 32;
        }
        else
            *str = argv[1][i];
        str++;
        i++;
    }
    str = str - len;
    printf("%s\n", str);
}

