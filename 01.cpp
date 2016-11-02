#include <iostream>

using namespace std;

bool has_equal_or_greater_member_than (int number, int *array, int len) {
  bool result = false;
  for (int i = 0; i < len; i++) {
    if (array[i] >= number) {
      result = true;
      break;
    }
  }
  return result;
}

/**
 * Create a function that decides if there is a bigger or equal number than a given number in an array
 * It should take the array, it's length and a number as a parameter, then return a boolean
 */

int main() {
  int num = -2;
  int array[] = {3, 2, 4, 6, -1};
  int len = sizeof(array)/sizeof(int);
  cout << has_equal_or_greater_member_than (num, array, len) << endl;
  return 0;
}