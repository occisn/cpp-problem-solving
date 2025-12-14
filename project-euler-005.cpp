#include <chrono>
#include <iostream>
#include <numeric>

static int project_euler_5(const int n)
{
  int res = 1;
  for (int i = 1; i <= n; i++) {
    res = std::lcm(res, i);
  }
  std::cout << "Solution for " << n << ": " << res << std::endl;
  return 0;
}

int main(void)
{
  std::cout << std::endl;
  project_euler_5(10);

  auto start = std::chrono::high_resolution_clock::now();
  project_euler_5(20);
  auto end = std::chrono::high_resolution_clock::now();

  std::chrono::duration<double> duration = end - start;
  std::cout << "Duration: " << duration.count() << " seconds" << std::endl;

  return 0;
}

// end
