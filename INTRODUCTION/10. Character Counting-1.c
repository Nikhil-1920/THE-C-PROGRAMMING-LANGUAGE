// Counting Character Input
#include <stdio.h>

int main(void) {
	long nc = 0;

	while(getchar() != EOF) {
        ++nc;
    }
    printf("%ld\n", nc);
    return 0;
}
