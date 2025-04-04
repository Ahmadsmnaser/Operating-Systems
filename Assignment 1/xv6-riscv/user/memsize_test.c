#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

// Task 2
int main()
{
    int current_memsize;
    current_memsize = memsize();
    printf("Bytes of Memory before Malloc : %d\n", current_memsize);
    char *c = malloc(20000); // malloc 20KB
    current_memsize = memsize();
    printf("Bytes of Memory after Malloc : %d\n", current_memsize);
    free(c);
    current_memsize = memsize();
    printf("Bytes of Memory after Free : %d\n", current_memsize);

    return 0;
}