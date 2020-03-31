#include<stdio.h>

int factorial(int);
void printfiboSeries(int);
void printOddSeries(int);
void printOddSeries(int);
void printMultiplicationTable(int, int);
int sumOfNBetween(int,int);
int productOfNBetween(int,int);

int factorial(int num){
  if(num == 0){
    return 1;
  };
  return num * factorial(num -1);
};

void printFiboSeries(int term){
  int previousTerm = -1;
  int nextTerm = 1;
  while(term >= 1){
    nextTerm = previousTerm + nextTerm; 
    previousTerm = nextTerm - previousTerm;
    printf("\n%d", nextTerm);
    term--;
  };
};

void printOddSeries(int endOfSeries){
  int num;
  for(num=1; num<=endOfSeries; num+=2){
    printf("%d\n",num);
  };
};

void printEvenSeries(int endOfSeries){
  int num;
  for(num=2; num<=endOfSeries; num+=2){
    printf("%d\n",num);
  };
};

void printMultiplicationTable(int num, int multiplierLimit){
  int multiplier;
  for (multiplier = 1; multiplier<= multiplierLimit; multiplier++){
    printf("\n%d", num * multiplier);
  };
};

int sumOfNBetween(int start, int end){
  int totalSum = 0, num;
  for(num = start; num<=end; num++){
    totalSum = totalSum + num;
  };
  return totalSum;
};

int productOfNBetween(int start, int end){
  int totalProduct = 1, num;
  for(num = start; num<=end; num++){
    totalProduct = totalProduct * num;
  };
  return totalProduct;
};



int main(void){
  int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;

  printf("Enter a number to calculate its factorial: ");
  scanf("%d", &num1);
  printf("Factorial of %d: %d", num1, factorial(num1));

  printf("\n\nEnter a number to print fibonacci series upto that number: ");
  scanf("%d", &num2);
  printFiboSeries(num2);

  printf("\n\nEnter a number to print all odd numbers till then: ");
  scanf("%d", &num3);
  printOddSeries(num3);

  printf("\n\nEnter a number to print all even numbers till then: ");
  scanf("%d", &num4);
  printEvenSeries(num4);

  printf("\n\nEnter two numbers m and n to print multiplication table of m until n: ");
  scanf("%d %d", &num5, &num6);
  printMultiplicationTable(num5, num6);

  printf("\n\nEnter two numbers to print sum of all numbers between them: ");
  scanf("%d %d", &num7, &num8);
  printf("Sum of all numbers between %d and %d: %d",num7, num8, sumOfNBetween(num7, num8));

  printf("\n\nEnter two numbers to print product of all numbers between them: ");
  scanf("%d %d", &num9, &num10);
  printf("Product of all numbers between %d and %d: %d",num7, num8, productOfNBetween(num9, num10));

  return 0;
};