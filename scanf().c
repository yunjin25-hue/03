#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  //system("PAUSE");	
  int input_int; // ���� ���� 
  float input_float; //�Ҽ��� ���� 
  
  printf("enter an integer : "); // ���� �Է� 
  scanf("%d",&input_int);   
  
  printf("enter a float : ");  // �Ǽ� �Է�  
  scanf("%f", &input_float);
  
  printf("integer : %d, float : %f\n", input_int, input_float);
  
  system("PAUSE");
  return 0;
}








