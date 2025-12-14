#include <chrono>
#include <iostream>

static int project_euler_2(const int n)
{
  int f1 = 1;
  int f2 = 2;
  int sum = 2;

  while (f2 <= n) {
    int tmp = f2;
    f2 = f1 + f2;
    f1 = tmp;
    if (f2 % 2 == 0) {
      sum += f2;
    }
  }

  std::cout << "Solution: " << sum << std::endl;
  return 0;
}

int main()
{
  std::cout << std::endl;

  auto start = std::chrono::high_resolution_clock::now();
  project_euler_2(4000000);
  auto end = std::chrono::high_resolution_clock::now();

  std::chrono::duration<double> duration = end - start;
  std::cout << "Duration: " << duration.count() << " seconds" << std::endl;

  return 0;
}
// end
