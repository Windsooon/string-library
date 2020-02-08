#include <stdio.h>
#include <string.h>

char *strstr_first(char *str1, const char *str2) {
    int l1, l2;
    l2 = strlen(str2);
    if (!l2) {
        return str1;
    }
    l1 = strlen(str1);
    while (l1 >= l2) {
        l1--;
        if (!memcmp(str1, str2, l2))
            return str1;
        str1++;
    }

    return NULL;
}


int main ()
{
  char str[] ="This is a simple string";
  char *pch;
  pch = strstr_first(str,"simple");
  strncpy(pch,"sample",6);
  puts(str);
  return 0;
}

