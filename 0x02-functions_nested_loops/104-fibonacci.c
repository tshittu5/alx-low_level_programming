#include <stdio.h>
/**
  * fibonacci98 - finds and prints the first 98 Fibonacci numbers
  * Description: In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+
  * Return: 0
  */
int main() {
  int prev = 1;
  int curr = 2;
  int next;
  printf("%d, %d, ", prev, curr);
  for (int i = 3; i <= 98; i++) {
    next = prev + curr;
    printf("%d, ", next);
    prev = curr;
    curr = next;
  }
  printf("\n");
  return 0;
}
