#include <stdio.h>
#include <math.h>

void getCircumference(int shape, float value) {
  if(shape == 1) {
    float  circumference = 2 * value * 3.14;
    printf("The circumference of the circle with radius = %.2f meters is %.2f meters.", value, circumference);
  } else if(shape == 2) {
    float perimeter = value * 3;
    printf("The perimeter of the triangle with side = %.2f meters is %.2f meters.", value, perimeter);
  }
  printf("\n");
}

void getArea(int shape, float value) {
  if(shape == 1) {
    float circleArea = value * value * 3.14;
    printf("The area of the circle with radius = %.2f meters is %.2f square meters. ", value, circleArea);
  } else if(shape == 2) {
    float triangleArea = (sqrt(3) / 4) * value * value;
    printf("The area of the triangle with side = %.2f meters is %.2f square meters.", value, triangleArea);
  }
  printf("\n");
}

int main(void)
{  
  int shape;
  float value;

  printf("Enter a number (Circle - 1, Triangle - 2) : ");
  scanf("%d", &shape);

  printf("Enter a floating number : ");
  scanf("%f", &value);

  getCircumference(shape, value);
  getArea(shape, value);
  return 0;
}
