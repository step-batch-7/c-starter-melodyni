#include<stdio.h>

int factorial(int);
void printfiboSeries(int);
void printOddSeries(int);
void printOddSeries(int);
void printMultiplicationTable(int, int);
int sumOfNBetween(int,int);
int productOfNBetween(int,int);
void printOddInRange(int, int);
void printNthInRange(int,int,int);

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

void printOddInRange(int startOfRange, int endOfRange){
  int num = startOfRange % 2 == 0? startOfRange + 1 : startOfRange;
  printf("\nOdd Numbers between %d and %d", startOfRange, endOfRange);
  while(num<= endOfRange){
    printf("\n%d", num);
    num = num+2;
  };
};

void printNthInRange(int interval, int start, int end){
  int num;
  printf("\nEvery %d number between %d and %d: \n", interval, start, end);
  for(num=start; num<=end; num+=interval){
    printf("%d\n",num);
  };
};

int main(void){
  int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, num14 ,num15;

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
  printf("Product of all numbers between %d and %d: %d",num9, num10, productOfNBetween(num9, num10));

  printf("\n\nEnter two numbers to print all odd numbers between them: ");
  scanf("%d %d", &num11, &num12);
  printOddInRange(num11, num12);

  printf("\n\nEnter three numbers n, a and b to a series between a and b with interval n: ");
  scanf("%d %d %d", &num13, &num14, &num15);
  printNthInRange(num13, num14, num15);

  return 0;
};