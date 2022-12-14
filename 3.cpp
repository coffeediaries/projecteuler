#include <iostream> 
using namespace std; 

int main() { 
  long long n = 600851475143; 
  // The number we want to find the prime factors of 
  for (long long i = 2; i < n; i++) { 
    if (n % i == 0) 
      // Check if i is a prime factor 
    { cout << i << " is a prime factor of " << n << endl; 
    } 
  } return 0; 
}