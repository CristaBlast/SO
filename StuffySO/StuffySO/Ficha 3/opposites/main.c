#include <stdio.h>
#include <string.h>

// para compilar
// gcc -o opposites main.c
// para correr o programa:
//  ./opposites high

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "%s: wrong number of arguments !\n", argv[0]);
        fprintf(stderr, "usage: %s <word>\n", argv[0]);
        return 1;
    }

    char *word = argv[1];
    char *word1[3] = {"high", "tall", "big"};
    char *word2[3] = {"low", "shorth", "small"};

    for (size_t i = 0; i < 3; i++)
    {
        if (strcmp(word, word1[i]) == 0)
        {
            printf("%s\n", word2[i]);
            return 0;
        }
        if (strcmp(word, word2[i]) == 0)
        {
            printf("%s\n", word1[i]);
            return 0;
        }
    }

    fprintf(stderr,"%s word not found\n", word);
    return 1;
}
