#include <stdio.h>
#include <stddef.h>
 
int main(void) {
    int a[20] = {0};
    int *p = &a[3];
    int *q = &a[13];
    ptrdiff_t diff1 = q - p; // This is 10
    char *x = (char*)p;
    char *y = (char*)q;
    ptrdiff_t diff2 = y - x; // This is 10 times sizeof(int)
    printf("diff1=%d, diff2=%d\n", (int)diff1, (int)diff2);
	return 0;
}