#include <iostream>

int sqaured(int x)
{
  return (x * x);
}

double sqauredDouble(double x)
{
  return (x * x);
}

int main()
{
  uint x  = 2;
  std::cout << "Let's do ints!!!" << std::endl;
  for (int i = 0; i < 10; i++)
  {
    x = sqaured(x);
    std::cout << x << std::endl;
    // Will not make it past i = 3 without overflowing the int data struct
  }

  double y = 2;
  std::cout << "Now for doubles!!!" << std::endl;
  for (int i = 0; i < 10; i++)
  {
    y = sqauredDouble(y);
    std::cout << y << std::endl;
  }


  return 0;
}
