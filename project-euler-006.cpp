#include <chrono>
#include <iostream>

int project_euler_6(const int n)
{
  int res = 0;
  for (int i = 1; i <= n; i++) {
    res = res + i;
  }
  res = res * res;
  for (int i = 1; i <= n; i++) {
    res = res - i * i;
  }
  std::cout << "Solution for " << n << ": " << res << std::endl;
  return 0;
}

int main()
{
  std::cout << std::endl;
  project_euler_6(10);

  auto start = std::chrono::high_resolution_clock::now();
  project_euler_6(100);
  auto end = std::chrono::high_resolution_clock::now();

  std::chrono::duration<double> duration = end - start;
  std::cout << "Duration: " << duration.count() << " seconds" << std::endl;

  return 0;
}

// end
