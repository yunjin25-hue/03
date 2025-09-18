#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  char c; // 한자리 숫자를 문자 형태로 받기  
  int i;
  
  printf("input a number : ");
  scanf("%c",&c); // %c로 받아야함  
  
  i= c-'0'; 
  printf("The input number is %i\n",i);
  
  
  system("PAUSE"); //이렇게 아래에 있어야 함  
  return 0;
}








