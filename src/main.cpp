#include <iostream>
#include "printableRocketCOUT.cpp"
#include "printableRocketPRINTF.cpp"

int main(void)
{
  ROCKET::PrintableRocketCOUT aPRCOUT(5);
  aPRCOUT.printTheRocketUpsideDown();

  ROCKET::PrintableRocketCOUT aPRPRINTF(5);
  aPRPRINTF.printTheRocketUpsideDown();

  return 0;
}
