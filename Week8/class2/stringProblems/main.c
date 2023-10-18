#include <stdio.h>

int main(void)
{
  int i;
  char str[100];

  scanf("%[^\n]", str);

  for(i = 0; str[i] != '\0'; i++) {
    if(str[i] >= 'A' && str[i] <= 'Z') {
      printf("%d\n", str[i]);
    }
  }
  return 0;
}
