#include <iostream>

#include "WheelEnd.hpp"

WheelEnd::WheelEnd(double wheelEndTemp,
                  double wheelEndWear,
                  bool wheelEndReplace)
                  :
                  temp(wheelEndTemp),
                  wear(wheelEndWear),
                  needsReplaced(wheelEndReplace)
{
  // Automatically sets needs replaced to true if wear exceeds 8 thousandths
  if (wear > 0.008)
  {
    needsReplaced = true;
  }
}

 void WheelEnd::printInfo()
{
  std::cout << "Tempature: " << temp << " degrees F" << std::endl;
  std::cout << "Wear: " << wear << "\"" << std::endl;

  if (needsReplaced)
  {
    std::cout << "Needs replaced" << std::endl;
  }
  else
  {
    std::cout << "Does not need replaced" << std::endl;
  }
}


int main()
{
  WheelEnd swift(28, 0.03);
  swift.printInfo();

  return 0;
}
