// calculating the area of a rectangle
#include <stdio.h>

int main()
{
  float l,w; // length and width of rectangle
  float s;   // area of rectangle
  
  printf("\ncalculating the area of a rectangle\n") ;
  printf("enter the initial data : \n");
  printf("Length (см.) -> ");
  scanf("%f", &l);
  printf("Width (см.) -> ");
  scanf("%f", &w) ;
  s = 1 * w;
  printf("area of parallelogram: %10.2f sq.cm \n", s) ;
  
  printf("\n\nTo finish press <Enter>") ;

  }
