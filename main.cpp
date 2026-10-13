#include <iostream>

// Lab 7 — Freesia Garcia
// CIS 5 Week 07 · Two arrays

int main() {

const int N = 5;

int quiz[N] = {88, 92, 70, 95, 81};
int lab[N] = {70, 70, 70, 70, 70};

// Quiz array 
std::cout << "Quiz" << "\n";

int sum = 0;
int hi = quiz[0];

for (int i = 0; i < N; ++i)
{
  std::cout << "[" << i << "] " << quiz[i] << "\n";

  sum += quiz[i];
  if (quiz[i] > hi)
  {
    hi = quiz[i];
  }
}

std::cout << "Sum: " << sum << "\n";
std::cout << "High: " << hi << "\n";

// Lab Array

std::cout << "Lab\n";

sum = 0;
hi = lab[0];

for (int i = 0; i < N; ++i)
{
  std::cout << "[" << i << "]" << lab[i] << "\n";
  sum += lab[i];
  if (lab[i] > hi)
  {
    hi = lab[i];
  }
}

std::cout << "Sum: " << sum << "\n";
std::cout << "High: " << hi << "\n";

  return 0;
}
