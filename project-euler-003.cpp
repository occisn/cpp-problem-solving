#include <chrono>
#include <iostream>

/* Calculate largest prime factor of n (long long)
 (v1 available in occisn/cpp-utils GitHub repository)*/
static long long largest_prime_factor(long long n)
{
  long long largest = 0;

  // Remove all factors of 2
  while (n % 2 == 0) {
    largest = 2;
    n /= 2;
  }

  // Remove all factors of 3
  while (n % 3 == 0) {
    largest = 3;
    n /= 3;
  }

  // Now n is odd and not divisible by 3.
  // Test divisors of the form 6k-1 and 6k+1.
  long long i = 5;
  while (i <= n / i) { // to avoid overflow
    // Check i = 6k - 1
    if (n % i == 0) {
      largest = i;
      n /= i;
    }
    // Check i+2 = 6k + 1
    else if (n % (i + 2) == 0) {
      largest = i + 2;
      n /= (i + 2);
    } else {
      i += 6;
    }
  }

  // If n is still > 1, it is prime
  if (n > 1) {
    largest = n;
  }

  return largest;
}

static int project_euler_3(const long long n)
{
  long long solution = largest_prime_factor(n);
  std::cout << "Solution for " << n << ": " << solution << std::endl;
  return 0;
}

int main()
{
  std::cout << std::endl;
  project_euler_3(13195);

  auto start = std::chrono::high_resolution_clock::now();
  project_euler_3(600851475143LL);
  auto end = std::chrono::high_resolution_clock::now();

  std::chrono::duration<double> duration = end - start;
  std::cout << "Duration: " << duration.count() << " seconds" << std::endl;

  return 0;
}

// end
