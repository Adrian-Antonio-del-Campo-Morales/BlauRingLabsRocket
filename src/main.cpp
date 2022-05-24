#include <iostream>
#include "printableRocketCOUT.cpp"

int main(void)
{
  std::cout << "Blau Ring Labs rules!" << std::endl;

  PrintableRocketCOUT aPRCOUT3(3);
  aPRCOUT3.printTheRocket();

  PrintableRocketCOUT aPRCOUT5(5);
  aPRCOUT5.printTheRocket();

  PrintableRocketCOUT aPRCOUT10(10);
  aPRCOUT10.printTheRocket();

  return 0;
}
