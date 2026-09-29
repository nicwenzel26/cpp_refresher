#include <iostream>

class WheelEnd
{
private:
  double temp; // Tepature of the wheelend in F
  double wear; // Wear on outer bearing of spindle in thousanths of inch
  bool   needsReplaced; // Bool for if spindle needs replacing

public:
  // WheelEnd constructor, sets default values for un-init WheelEnd
  WheelEnd(double wheelEndTemp = 27.0, double wheelEndWear = 0.0, bool wheelEndReplace = false)
  {
    temp = wheelEndTemp;
    wear = wheelEndWear;
    needsReplaced = wheelEndReplace;

    // Automatically sets needs replaced to true if wear exceeds 8 thousandths
    if (wear > 0.008)
    {
      needsReplaced = true;
    }
  }

  // Function to print the info of the WheelEnd
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
