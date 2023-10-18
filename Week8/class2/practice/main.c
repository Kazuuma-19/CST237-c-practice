#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i;
  char str[100];

  scanf("%[^\n]", str);

  for(i = 0; str[i] != '\0'; i++) {
    if(str[i] == ' ') {
      printf("\n");
    } else {
      printf("%c", str[i]);
    }
  }
  printf("\n");

  return 0;
}
