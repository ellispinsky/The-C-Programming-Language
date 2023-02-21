#include <stdio.h>
/* count lines in input */
main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if ( c == ' ' || c == '\n' || c == '\t' || c == '-')
            putchar('\n');
        else
            putchar(c);
    }
}

