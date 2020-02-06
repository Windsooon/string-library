#include <stdio.h>
#include <string.h>

int strncmp(const char * str1, const char * str2, size_t num ) {
    int res = 0;
    while (num) {
        if (*str1 < *str2) {
            return -1;
        }
        else if (*str1 > *str2) {
            return 1;
        }
        num--;
        str1++;
        str2++;
    }
    return res;

}

int main ()
{
  char str[][5] = { "R2D2" , "C3PO" , "R2A6" };
  int n;
  puts ("Looking for R2 astromech droids...");
  for (n=0 ; n<3 ; n++)
    if (strncmp (str[n],"R2xx",2) == 0)
    {
      printf ("found %s\n",str[n]);
    }
  return 0;
}
