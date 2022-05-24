#include <iostream>
#include "printableRocketCOUT.cpp"
#include "printableRocketPRINTF.cpp"

int main(void)
{
  PrintableRocketCOUT aPRCOUT(5);
  aPRCOUT.printTheRocket();

  PrintableRocketCOUT aPRPRINTF(5);
  aPRPRINTF.printTheRocket();

  return 0;
}
