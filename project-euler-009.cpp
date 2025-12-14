#include <algorithm>
#include <chrono>
#include <iostream>

int project_euler_9(const int n)
{
  int nbSolutions = 0;
  int res = 0;
  for (int c = n; c >= 3; c--) {
    // upper limit for b:
    //   (i) b < c
    //   (ii) b = 1000-c-a with a >= 1 thus b <= 1000-c-1
    // lower limit for b:
    //   (i) 1 <= a < b thus b > 1
    //   (ii) 1000-c = a+b with a < b thus 1000-c < 2b
    int bmax = std::min(c - 1, n - c - 1);
    int bmin = std::max(2, (n - c) / 2);
    for (int b = bmax; b >= bmin; b--) {
      int a = n - b - c;
      if (c * c == a * a + b * b) {
        nbSolutions++;
        res = a * b * c;
      }
    }
  }
  std::cout << "Solution: " << res << " (" << nbSolutions << " solution)" << std::endl;
  return 0;
}

int main(void)
{
  std::cout << std::endl;

  auto start = std::chrono::high_resolution_clock::now();
  project_euler_9(1000);
  auto end = std::chrono::high_resolution_clock::now();

  std::chrono::duration<double> duration = end - start;
  std::cout << "Duration: " << duration.count() << " seconds" << std::endl;

  return 0;
}

// end
