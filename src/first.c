#include<stdio.h>
#include <wchar.h>
size_t my_strlen(char *s)
{
   char *p = s;

   while (*p)
      ++p;

   return (p - s);
}

size_t w_strlen(const wchar_t *s)
{
const wchar_t *p = s;
while (*p)
++p;
return (p - s);
}
/* stach operation test */
int main ()
{
//#im adding comment to difference;
printf("\n Hello World");

return 0;
}
