#include <stdio.h>

int main(void)
{  
  int MAX_SZ = 100;
  char str[MAX_SZ];
  char number[MAX_SZ];
  int i;
  int index = 0;

  // get user input
  fgets(str, MAX_SZ, stdin);

  for(i = 0; str[i] != '\0'; i++){
    // store digits
    if(str[i] >= '0' && str[i] <= '9') {
      number[index++] = str[i];
    }
    // if it is not digit, print
    else {
      if(index > 0) {
        // reset the index if it's not sequence
        number[index] = '\0';
        index = 0;
        printf("%s\n", number);
      }
    }
  }
  printf("\n");

  return 0;
}
