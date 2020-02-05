#include <stdio.h>
#include <string.h>

size_t strcspn_first (const char *str1, const char *str2) {
    int position = 0;
    const char *first, *second;
    for (first = str1; *first != '\0'; first++) {
        for (second = str2; *second != '\0'; second++) {
            if (*first == *second) {
                return position;
            }
        }
        position++;
    }
    return position;
}

/* strcspn example */

int main() {
  char str[] = "fcba73";
  char keys[] = "1234567890";
  int i;
  i = strcspn_first(str,keys);
  printf ("The first number in str is at position %d.\n",i+1);
  return 0;
}
