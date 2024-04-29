#include "conta_letra.h"
#include <string.h>

int conta_letra(char *s,char c)
{
    int count=0;

    for (size_t i = 0; i < strlen(s); i++)
    {
        if(s[i]==c)
        {
            count++;
        }
    }
    return count;
}