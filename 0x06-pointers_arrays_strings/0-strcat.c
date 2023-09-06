#include <stdio.h>

char *_strcat(char *dest, char *src) {
    // Find the end of the destination string
    char *dest_end = dest;
    while (*dest_end != '\0') {
        dest_end++;
    }

    // Append characters from src to dest
    while (*src != '\0') {
        *dest_end = *src;
        dest_end++;
        src++;
    }

    // Add the terminating null byte
    *dest_end = '\0';

    return dest;
}

int main() {
    char dest[50] = "Hello, ";
    char src[] = "world!";

    printf("Before concatenation: %s\n", dest);

    _strcat(dest, src);

    printf("After concatenation: %s\n", dest);

    return 0;
}
