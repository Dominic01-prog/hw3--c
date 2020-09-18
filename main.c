// Author: Dominic Savaglio
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
int digit_sum(int n){
  if (n == 0) {
    return 0;
  } else {
    return n % 10 + digit_sum(n / 10);
  }
}
int main(void) {
  char *sum = readline("Enter an int: ");
  int add = atof(sum);
  digit_sum(add);
  printf("sum of digits of %s is %d.\n", sum, digit_sum(add));
}