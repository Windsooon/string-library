#include <string.h>
#include <stdio.h>

char *strchr_first (char *str, int character) {
    char *tem = str;
    while (*tem != '\0') {
        if (*tem == character) {
            return tem;
        }
        tem++;
    }
    return NULL;
}

int main() {
    char str[] = "This is a sample string"; 
    char *pch;
    pch= strchr_first(str,'s');
    while (pch!=NULL) {
        printf ("found at %d\n",pch-str+1);
        pch=strchr(pch+1,'s');
    }
}
