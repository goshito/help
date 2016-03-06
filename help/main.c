/* Produce a backspace character in a file */

#include <stdio.h>

int main(void) {
    FILE *f = fopen("backspace.txt", "w");
    fputs("\\b", f);
    fclose(f);
    return 0;
}
