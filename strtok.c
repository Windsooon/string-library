#include <stdio.h>
#include <string.h>

int contain(char *start, const char *delimiters) {
    for (; *delimiters != '\0'; delimiters++) {
        if (*start == *delimiters) {
            return 1;
        }
    }
    return 0;
}

char *_strtok_first(char *str, const char *delimiters, char **old) {
    char *start;
    if (str == NULL) {
        start = *old;
    }
    else {
        *old = str;
        start = str;
    }
    if (*start == '\0') {
        *old = start;
        return NULL;
    }
    start = *old;
    while (contain(start, delimiters)) {
        start++;
    } 
    char *end = start;
    while (!contain(end, delimiters)) {
        end++;
    } 
    *end = '\0';
    *old = end + 1;
    return start;
}

char *strtok_first(char *str, const char *delimiters) {
    static char* old;
    return _strtok_first(str, delimiters, &old);
}

int main () {
  char str[] ="- This, a sample string.";
  char * pch;
  printf ("Splitting string \"%s\" into tokens:\n",str);
  pch = strtok_first(str," ,.-");
  while (pch != NULL)
  {
    printf ("%s\n",pch);
    pch = strtok_first(NULL, " ,.-");
  }
  return 0;
}
