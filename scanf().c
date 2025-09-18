#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  char alphabet;
  
  printf("enter a character : ");
  scanf("%c",&alphabet);
  
  printf("the next character of %c (%i) is %c (%i).\n", alphabet,alphabet,alphabet+1,alphabet+1);
  
  system("PAUSE"); //이렇게 아래에 있어야 함  
  return 0;
}

//'실행' 안 될 땐 '컴파일'부터 해보고 하기  







