#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[] = "Ola", s2[] = "Ola";
    if (s1 == s2)
        printf("Ponteiros que apontam para o mesmo sítio\n");
    else
        printf("Ponteiros diferentes\n");

    if (strcmp(s1, s2) == 0)
        printf("As strings são iguais\n");
    return 0;
}
