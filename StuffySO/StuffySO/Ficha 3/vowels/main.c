#include <stdio.h>
#include <string.h>

// para compilar
// gcc -o vowels main.c
// para correr o programa:
//  ./vowels high

int main(int argc, char *argv[]) // TODO
{
    if (argc != 2)
    {
        fprintf(stderr, "%s: wrong number of arguments !\n", argv[0]);
        fprintf(stderr, "usage: %s <words>\n", argv[0]);
        return 1;
    }

    char *word = argv[1];
    //char *word1[3] = {"high", "tall", "big"};
    //char *word2[3] = {"low", "shorth", "small"};

    for (size_t i = 0; i < strleng; i++)
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
