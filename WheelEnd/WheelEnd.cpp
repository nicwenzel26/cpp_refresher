#include <iostream>

#include "WheelEnd.hpp"

WheelEnd::WheelEnd(double wheelEndTemp,
                  double wheelEndWear,
                  bool wheelEndReplace)
                  :
                  temperatureF(wheelEndTemp),
                  wearInches(wheelEndWear),
                  needsReplaced(wheelEndReplace)
{
  // Automatically sets needs replaced to true if wear exceeds 8 thousandths
  if (wearInches > 0.008)
  {
    needsReplaced = true;
  }
}

 void WheelEnd::printInfo() const
{
  std::cout << "Tempature: " << temperatureF << " degrees F" << std::endl;
  std::cout << "Wear: " << wearInches << "\"" << std::endl;

  if (needsReplaced)
  {
    std::cout << "Needs replaced" << std::endl;
  }
  else
  {
    std::cout << "Does not need replaced" << std::endl;
  }
}
