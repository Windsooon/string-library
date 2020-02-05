#include <stdio.h>
#include <string.h>

size_t strlen_first(const char *str ) {
    int length = 0;
    while (*str++ != '\0') {
        length++;
    }
    return length;
}

int main ()
{
  char szInput[256];
  printf("Enter a sentence: ");
  gets(szInput);
  printf("The sentence entered is %u characters long.\n",(unsigned)strlen(szInput));
  return 0;
}
