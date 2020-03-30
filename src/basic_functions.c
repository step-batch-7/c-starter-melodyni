#include<stdio.h>

char isEven(int num);
char isOdd(int num);

char isEven(int num){
  return num % 2 == 0;
};

char isOdd(int num){
  return !isEven(num);
};


int main(void){
  int num;
  printf("Enter a number to check whether it is even or not: ");
  scanf("%d", &num);
  printf("%s",isEven(num)? "even":"not even");

  printf("\n\nEnter a number to check whether it is odd or not: ");
  scanf("%d", &num);
  printf("%s",isOdd(num)? "odd":"not odd");
};
