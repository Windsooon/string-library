#include <stdio.h>
#include <string.h>

size_t strspn_first(const char * str1, const char * str2) {
    int length = 0;
    const char *tem_str2;
    for (; *str1 != '\0'; str1++) {
        for (tem_str2 = str2; *tem_str2 != '\0'; tem_str2++) {
            if (*str1 == *tem_str2) {
                length++;
                break;
            }
            if (*tem_str2 == '\0') {
                return length;
            }
        }
    }
    return length;
}


int main ()
{
  int i;
  char strtext[] = "129th";
  char cset[] = "1234567890";

  i = strspn_first(strtext,cset);
  printf("The initial number has %d digits.\n",i);
  return 0;
}
