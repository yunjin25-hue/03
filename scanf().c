#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  char c; // ���ڸ� ���ڸ� ���� ���·� �ޱ�  
  int i;
  
  printf("input a number : ");
  scanf("%c",&c); // %c�� �޾ƾ���  
  
  i= c-'0'; 
  printf("The input number is %i\n",i);
  
  
  system("PAUSE"); //�̷��� �Ʒ��� �־�� ��  
  return 0;
}








