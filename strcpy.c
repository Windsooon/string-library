#include <string.h>
#include <stdio.h>

char *strcpy_first ( char *destination, const char *source ) {
    memcpy(destination, source, strlen(source)+1);
    return destination;
}

char *strcpy_second ( char *destination, const char *source ) {
    char *tem = destination;
    while ((*tem++ = *source++) != '\0')
        ;
    return destination;
}

int main ()
{
  char str1[]="Sample string";
  char str2[40];
  char str3[40];
  strcpy(str2,str1);
  strcpy(str3,"copy successful");
  printf ("str1: %s\nstr2: %s\nstr3: %s\n",str1,str2,str3);
  return 0;
}
