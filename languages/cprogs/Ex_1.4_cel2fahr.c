#include <stdio.h>

void main()
{
  float fahr, celsius;
  int  lower = 0,upper = 300,step = 20;
  printf("C     F\n\n");
  celsius = lower;
  while(celsius <= upper)
  {
    fahr = (9.0/5.0) * celsius + 32.0;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
}
}
