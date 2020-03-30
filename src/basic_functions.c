#include<stdio.h>

char isEven(int num);
char isOdd(int num);
long int square(int num);
long int cube(int num);

char isEven(int num){
  return num % 2 == 0;
};

char isOdd(int num){
  return !isEven(num);
};

long int square(int num){
  return num * num;
};

long int cube(int num){
  return square(num) * num;
};


int main(void){
  int num;
  printf("Enter a number to check whether it is even or not: ");
  scanf("%d", &num);
  printf("%d is %s", num, isEven(num)? "even":"not even");

  printf("\n\nEnter a number to check whether it is odd or not: ");
  scanf("%d", &num);
  printf("%d is %s", num, isOdd(num)? "odd":"not odd");

  printf("\n\nEnter a number to get square of it: ");
  scanf("%d", &num);
  printf("Square of %d is %ld", num, square(num));

  printf("\n\nEnter a number to get cube of it: ");
  scanf("%d", &num);
  printf("Cube of %d is %ld", num, cube(num));
};
