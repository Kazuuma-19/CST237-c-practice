#include <stdio.h>

int main(void) {
  int MAX_SZ = 100;
  char input[MAX_SZ];
  int i;

  // get user input
  scanf("%[^\n]", input);

  // iterate array and print out the capital letters
  for(i = 0; input[i] != '\0'; i++){
    if(input[i] >= 'A' && input[i] <= 'Z') {
        printf("%c", input[i]);
    }
  }
  printf("\n");

  return 0;
}