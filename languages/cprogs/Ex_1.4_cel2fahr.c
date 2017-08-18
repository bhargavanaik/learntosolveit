#include <stdio.h>
void main()
{
  float fahr, celsius=0,step = 20.00;
  printf("C     F\n\n");
  while(celsius <= 300)
  {
    fahr = (9.0/5.0) * celsius + 32.0;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
}
}
