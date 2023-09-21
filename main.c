#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int input_a;
    int input_b;
    
    printf("input a inegar :");
    scanf("%i", &input_a);
    
    printf("input a integar :");
    scanf("%i", &input_b);
       
    float result = (float)input_a/ input_b;
    printf(" result is %f\n ", result);    
  system("PAUSE");	
  return 0;
}
