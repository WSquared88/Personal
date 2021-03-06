/*
 Sifer Aseph
 Project Euler
 
 Problem 2 "Even Fibonacci numbers"
 "Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
  1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
  By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms."
 */

#include <iostream>

long evenFibonacci(long);

int main() {
  int total = 0;

  for (n = 0; n < 34; ++n) {
    if (evenFibonacci(n)%2 == 0){
      total += evenFibonacci(n);
    }
  }
  
    std::cout << total << "\n";
 
  return 0;
}

long evenFibonacci(long n)
{
  if (n==0){
    return 0;
  }
  
  if (n==1){
    return 1;
  }
  
  return evenFibonacci(n-1) + evenFibonacci(n-2);
}

/*
 This code takes longer than the universe's lifespan to calculuate for n = 4,000,000 (this is the limit of this problem's sequence). 
 
 It is not necessary to go to the 4 million nths though (my initial try). It solves the problem at 34, 35, 36; you get 4,613,732. At 37 you get 19,544,084. At 33 you get 1,089,154.
 */
