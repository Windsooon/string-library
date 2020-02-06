#include <stdio.h>
#include <string.h>

char *strncat_first( char *destination, const char *source, size_t num ) {
    char *tem = destination;
    memcpy(destination + strlen(destination), source, num+1);
    return tem;
}

char *strncat_second( char *destination, const char *source, size_t num ) {
    char *tem = destination;
    while (*destination)
        destination++;
    for (; num>0; num--) {
        if ((*destination++ = *source++) == '\0') {
            *destination = '\0';
            return tem;
        }
    }
    return tem;

}


int main ()
{
  char str1[20];
  char str2[20];
  strcpy(str1,"To be ");
  strcpy(str2,"or not to be");
  strncat_second(str1, str2, 6);
  puts(str1);
  return 0;
}

