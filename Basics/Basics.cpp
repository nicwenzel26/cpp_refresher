#include <iostream>

int main()
{
    int x = 0;

    // Practice while loop
    while (x < 11)
    {
      std::cout << "x = " << x << std::endl;
      x += 1;

      // Practice switch statement
      switch (x)
      {
        case (5): // If x is 5 print this
          std::cout << "Halfway!" << std::endl;
          break;

        default: // If x is not 5 do nothing 
          break;
      }
    }

    return 0;
}
