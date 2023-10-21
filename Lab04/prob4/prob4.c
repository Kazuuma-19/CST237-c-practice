#include<stdio.h>
#include <stdbool.h>

float addNum(char num[]) {
  int i;
  float wholeValue = 0;
  float decimalValue = 0;
  float decimalMultiplier = 0.1;
  bool decimal = false;

  for(i = 0; num[i] != '\0'; i++){ 
    char digit = num[i];

    // if the char is '.', skip the loop
    if(num[i] == '.') {
      decimal = true;
      continue;
    }

    // calculate decimal number
    if(decimal) {
      decimalValue += (digit - '0') * decimalMultiplier;
      decimalMultiplier /= 10;
    }
    // calculate whole number
    else {
      wholeValue = wholeValue * 10 + (digit - '0');
    }
  }
  // add whole and decimal
  return wholeValue + decimalValue;
}

int main(int argc, char const *argv[])
{
  int MAX_SZ = 100;
  char str[MAX_SZ];
  char number[MAX_SZ];
  int i;
  int index = 0;
  float sum = 0;

  // get user input
  fgets(str, MAX_SZ, stdin);

  for(i = 0; str[i] != '\0'; i++){
    // store digits
    if(str[i] >= '0' && str[i] <= '9' || str[i] == '.') {
      number[index++] = str[i];
    }
    // if it is not digit, print
    else {
      if(index > 0) {
        number[index] = '\0';
        index = 0;

        // add a float number
        sum += addNum(number);
      }
    }
  }
  printf("%.2f", sum);
  printf("\n");
  return 0;
}
