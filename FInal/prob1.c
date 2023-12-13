#include <stdio.h>

int printNum(char cha, char digitChar) {
  int digit = digitChar - '0';

  int i;
  for(i = 0; i < digit; i++) {
    printf("%c", cha);
  }
  return 0;
}

int main(void)
{  
  int MAX_SZ = 100;
  char str[MAX_SZ];

  fgets(str, MAX_SZ, stdin);

  int i;
  for(i = 0; str[i] != '\0'; i++){
    if(str[i] > '0' && str[i] <= '9') {
      printNum(str[i - 1], str[i]);
      printf("\n");
    }
  }

  return 0;
}
