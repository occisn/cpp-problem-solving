#include <numeric>

int project_euler_005(const int n)
{
  int res = 1;
  for (int i = 1; i <= n; i++) {
    res = std::lcm(res, i);
  }
  return res;
}

// end
