#include <string.h>
#include <stdio.h>

char *strcat_first(char *destination, const char *source) {
    char *res = destination;
    while (*destination) {
        destination++;
    }
    while ((*destination++ = *source++) != '\0')
		;
    return res;
}

char *strcat_second(char *destination, const char *source) {
    char *res = destination;
    memcpy(destination + strlen(destination), source, strlen(source)+1);
    return res;
}

int main() {
    char str[80];
    strcpy(str,"these ");
    strcat_first(str,"strings ");
    strcat_first(str,"are ");
    strcat_first(str,"concatenated.");
    puts(str);
    return 0;
}
