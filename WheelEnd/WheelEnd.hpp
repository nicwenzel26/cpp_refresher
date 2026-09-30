#pragma once
// #pragma once is a more modern way of protecting headers from being processed multiple times if included in multiple files

class WheelEnd
{
private:
  double temp; // Tepature of the wheelend in F
  double wear; // Wear on outer bearing of spindle in thousanths of inch
  bool   needsReplaced; // Bool for if spindle needs replacing

public:
  // WheelEnd constructor
  WheelEnd(double wheelEndTemp = 27.0,
                  double wheelEndWear = 0.0,
                  bool wheelEndReplace = false);

  // Function to print the info of the WheelEnd
  void printInfo();
};
