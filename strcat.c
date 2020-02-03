#include <string.h>
#include <stdio.h>

char *strcat_first ( char *destination, const char *source ) {
    char *res = destination;
    while (*destination != '\0') {
        destination++;
    }
    while (*source != '\0') {
        *destination = *source; 
        destination++;
        source++;
    }
    return res;
}

char *strcat_second ( char *destination, const char *source ) {
    char *res = destination;
    memcpy(destination + strlen(destination), source, strlen(source)+1);
    return res;
}

int main() {
    char des[] = "foo"; 
    char sor[] = "bar"; 
    char *first = strcat_first(des, sor);
    // char *second = strcat_second(des, sor);
    printf("%s\n", first);
    // printf("%s\n", second);
    return 0;
}
