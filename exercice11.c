#include <stdio.h>

int main() {
    int tab[10] = {1,1,2,3,5,8,13,21,34,55};
    int *p;

    p = tab;
    // Display size of an int, int*, long, long*, tab and p in the memory
    printf("int %lu ; int* %lu ; long %lu ; long* %lu ; tab %lu ; p %lu\n", sizeof(int), sizeof(int *), sizeof(long), sizeof(long *), sizeof(tab), sizeof(p));


    char *q = (char * )p;
    int i;
    for (i = 0; i < 10; i++) {
        // Display
        printf("tab[%d] = %d ; * (p + %d) = %d ; *(q+%i) = %d\n", i, tab[i], i, *(p+i), i, *(q+i));
    }
}
