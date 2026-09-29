#include <iostream>

class WheelEnd
{
private:
  double temp;
  double wear;
  bool   needsReplaced;

public:
  WheelEnd(double wheelEndTemp = 27.0, double wheelEndWear = 0.0, bool wheelEndReplace = false)
  {
    temp = wheelEndTemp;
    wear = wheelEndWear;
    needsReplaced = wheelEndReplace;

    if (wear > 0.008)
    {
      needsReplaced = true;
    }
  }

  void printInfo()
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

};


int main()
{
  WheelEnd swift(28, 0.03);
  swift.printInfo();

  return 0;
}
