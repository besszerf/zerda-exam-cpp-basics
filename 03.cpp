#include <iostream>

using namespace std;

void multiply_float_with_pointer(float number, float *base) {
  *base *= number;
}

/**
 * Create a function that takes a pointer to a float and a float, then it should
 * multiply the value of the pointer with the given float and save the result
 * where the pointer points.
 * Please mutliply the total variable by 5 with it.
 */

int main() {
  float total = 123;
  float mult = 5;
  multiply_float_with_pointer(mult, &total);
  cout << total << endl;
  return 0;
}