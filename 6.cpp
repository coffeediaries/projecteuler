#include <iostream>
#include <cmath>

int main() {
  int sum_of_squares = 0;
  int sum = 0;

  for (int i = 1; i <= 100; i++) {
    sum_of_squares += i * i;
    sum += i;
  }

  int square_of_sum = sum * sum;
  int difference = square_of_sum - sum_of_squares;

  std::cout << "Difference: " << difference << std::endl;

  return 0;
}