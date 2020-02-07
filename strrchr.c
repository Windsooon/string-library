#include <stdio.h>
#include <string.h>

char *strrchr_first(char *str, int character) {
    int position = -1;
    for (int count = 0; *str != '\0'; count++, str++) {
        if (*str == character) {
            position = count;
        }
    }
    return position != -1 ? position : NULL;
}

int main () {
  char str[] = "This is a sample string";
  char *pch;
  pch = strrchr(str,'s');
  printf("Last occurence of 's' found at %d \n",pch-str+1);
  return 0;
}
