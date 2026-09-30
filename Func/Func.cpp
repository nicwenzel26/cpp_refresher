#include <iostream>

unsigned int squared(unsigned int x)
{
  return (x * x);
}

double squared(double x) // Overloaded function, compiler will pick this is double is passed in
{
  return (x * x);
}

int main()
{
  unsigned int x  = 2; // Use of uint works but does not make for a portable program
  std::cout << "Let's do ints!!!" << std::endl;
  for (int i = 0; i < 10; i++)
  {
    x = squared(x);
    std::cout << x << std::endl;
    // Will not make it past i = 3 without overflowing the int data struct
  }

  double y = 2;
  std::cout << "Now for doubles!!!" << std::endl;
  for (int i = 0; i < 10; i++)
  {
    y = squared(y);
    std::cout << y << std::endl;
  }


  return 0;
}
