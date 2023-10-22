#include <stdio.h>

int getNumValue(char[]);

int main(void)
{
  int MAX_SZ = 100;
  char str[MAX_SZ];
  char number[MAX_SZ];

  int i;
  int index = 0;
  int sum = 0;

  // get user input
  fgets(str, MAX_SZ, stdin);

  for(i = 0; str[i] != '\0'; i++){
    // store digits
    if(str[i] >= '0' && str[i] <= '9') {
      number[index++] = str[i];
    }
    else {
      if(index > 0) {
        // reset the index if it's not sequence
        number[index] = '\0';
        index = 0;

        // invoke method which returns the sequence number
        sum += getNumValue(number);
      }
    }
  }
  // print total number
  printf("%d", sum);
  printf("\n");

  return 0;
}

int getNumValue(char num[]) {
  int i;
  int numValue = 0;

  // iterate num array
  for(i = 0; num[i] != '\0'; i++) {
    char digit = num[i];
    // covert char to int
    numValue = numValue * 10 + (digit - '0');
  }
  return numValue;
}
