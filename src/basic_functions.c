#include<stdio.h>

char isEven(int num);
char isOdd(int num);
long int square(int num);
long int cube(int num);
double simpleInterest(double,double,double);

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

double simpleInterest(double principalAmount, double rate, double time){
  return (principalAmount*rate*time)/100;
}


int main(void){
  int num1, num2, num3, num4, num5;
  double principalAmount, rate, time;

  printf("Enter a number to check whether it is even or not: ");
  scanf("%d", &num1);
  printf("%d is %s", num1, isEven(num1)? "even":"not even");

  printf("\n\nEnter a number to check whether it is odd or not: ");
  scanf("%d", &num2);
  printf("%d is %s", num2, isOdd(num2)? "odd":"not odd");

  printf("\n\nEnter a number to get square of it: ");
  scanf("%d", &num3);
  printf("Square of %d is %ld", num3, square(num3));

  printf("\n\nEnter a number to get cube of it: ");
  scanf("%d", &num4);
  printf("Cube of %d is %ld", num4, cube(num4));

  printf("\n\nEnter a number to get cube of it: ");
  scanf("%d", &num5);
  printf("Cube of %d is %ld", num5, cube(num5));

  printf("\n\nCalculate Simple Interest\nEnter Principal Amount: ");
  scanf("%lf", &principalAmount);
  printf("Enter Rate: ");
  scanf("%lf", &rate);
  printf("Enter Time Period: ");
  scanf("%lf", &time);
  printf("Simple Interest: %lf", simpleInterest(principalAmount,rate,time));

};

