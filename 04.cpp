#include <iostream>

using namespace std;

int number_of_divisors(int num) {
  int result = 0;
  for (int i = 1; i < num+1; i++) {
    if (num % i == 0) {
      result += 1;
    }
  }
  return result;
}

/**
 * Create a function that takes an integer and returns how many divisors it has
 */

int main() {
  int num = 102;
  cout << number_of_divisors(num);
  return 0;
}
