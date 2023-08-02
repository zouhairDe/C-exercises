/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <unistd.h>

int main(int ac, char *av[])
{
    int i = 1,j = 0;
    if (ac > 2)
        return (0);
    while(av[1][i])
    {
        if (i % 3 == 0)
            av[1][i] = '5';
        else if (i % 5 == 0)
            av[1][i] = '3';
        else if (i % 3 == 0 && i % 5 == 0)
            av[1][i] = 53;
        i++;
    }
    while (av[1][j])
    {
        write(1, &av[1][j], 1);
        j++;
    }
}
    
