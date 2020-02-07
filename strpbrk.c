#include <stdio.h>
#include <string.h>

char *strpbrk_first(char *str1, const char *str2) {
    for (; *str1 != '\0'; str1++) {
        const char *tem_str2 = str2;
        for (; *tem_str2 != '\0'; tem_str2++) {
             if (*str1 == *tem_str2) {
                 return str1;
             }
        }
    }
    return NULL;
}

int main ()
{
  char str[] = "This is a sample string";
  char key[] = "aeiou";
  char * pch;
  printf("Vowels in '%s': ",str);
  pch = strpbrk_first(str, key);
  while (pch != NULL)
  {
    printf("%c " , *pch);
    pch = strpbrk_first(pch+1,key);
  }
  printf ("\n");
  return 0;
}
