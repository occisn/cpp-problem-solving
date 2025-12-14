#include "project_euler_001.hpp"
#include "project_euler_002.hpp"
#include "project_euler_003.hpp"
#include "project_euler_005.hpp"
#include "project_euler_006.hpp"
#include "project_euler_009.hpp"
#include <chrono>
#include <iostream>

int main()
{
  std::cout << std::endl;

  auto start = std::chrono::high_resolution_clock::now();

  std::cout << "Project Euler 001: " << project_euler_001(1000) << std::endl;
  std::cout << "Project Euler 002: " << project_euler_002(4000000) << std::endl;
  std::cout << "Project Euler 003: " << project_euler_003(600851475143) << std::endl;
  std::cout << "Project Euler 005: " << project_euler_005(20) << std::endl;
  std::cout << "Project Euler 006: " << project_euler_006(100) << std::endl;
  std::cout << "Project Euler 009: " << project_euler_009(1000) << std::endl;

  auto end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double> duration = end - start;
  std::cout << "Duration: " << duration.count() << " seconds" << std::endl;

  return EXIT_SUCCESS;
}

// end
