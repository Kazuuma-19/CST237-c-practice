# include <stdio.h>
int calculateFactorial(int num) {
  if(num == 0) {
    return 1;
  }
  
  if(num < 0) {
    return -1;
  }
  else {
    return num * calculateFactorial(num - 1);
  }
}

int main(void) {
  int num, factorial;
  printf("Enter the Number: ");
  scanf("%d", &num);
  printf("The number is %d\n", num);

  factorial = calculateFactorial(num);
  printf("The factorial is %d\n", factorial);
  
  return 0;
}