#include <chrono>
#include <iostream>

static int project_euler_1(const int n)
{
  int sum = 0;
  for (int i = 1; i < n; i++) {
    if ((i % 3 == 0) || (i % 5 == 0)) {
      sum += i;
    }
  }
  std::cout << "Solution for n = " << n << ": " << sum << std::endl;
  return EXIT_SUCCESS;
}

int main()
{
  std::cout << std::endl;
  project_euler_1(10);

  auto start = std::chrono::high_resolution_clock::now();
  project_euler_1(1000);
  auto end = std::chrono::high_resolution_clock::now();

  std::chrono::duration<double> duration = end - start;
  std::cout << "Duration: " << duration.count() << " seconds" << std::endl;

  return EXIT_SUCCESS;
}
// end
