#include<stdio.h>

int factorial(int);
void printfiboSeries(int);


int factorial(int num){
  if(num == 0){
    return 1;
  }
  return num * factorial(num -1);
}

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

int main(void){
  int num1, num2;

  printf("Enter a number to calculate its factorial: ");
  scanf("%d", &num1);
  printf("Factorial of %d: %d", num1, factorial(num1));

  printf("\n\nEnter a number to print fibonacci series upto that number: ");
  scanf("%d", &num2);
  printFiboSeries(num2);

  return 0;
}