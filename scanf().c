#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  //system("PAUSE");	
  int input_int; // 정수 변수 
  float input_float; //소수점 변수 
  
  printf("enter an integer : "); // 정수 입력 
  scanf("%d",&input_int);   
  
  printf("enter a float : ");  // 실수 입력  
  scanf("%f", &input_float);
  
  printf("integer : %d, float : %f\n", input_int, input_float);
  
  system("PAUSE");
  return 0;
}








