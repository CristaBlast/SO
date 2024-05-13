#include <stdio.h>

int main(void) {
    char *ptr = NULL;

    printf("sizeof(*ptr)=%zu\n", sizeof(*ptr));
    printf("sizeof(ptr) =%zu\n", sizeof(ptr));

    return 0;
}
