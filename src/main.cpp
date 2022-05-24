#include <iostream>
#include "printableRocketCOUT.cpp"
#include "printableRocketPRINTF.cpp"

int main(void)
{
  ROCKET::PrintableRocketCOUT aPRCOUT(1);
  aPRCOUT.printTheRocket();
  ROCKET::PrintableRocketPRINTF aPRPRINTF(5);
  aPRPRINTF.printTheRocket();


  ROCKET::PrintableRocketPRINTF aPRPRINTFUD(1);
  aPRPRINTFUD.printTheRocketUpsideDown();

  ROCKET::PrintableRocketCOUT aPRCOUTUD(5);
  aPRCOUTUD.printTheRocketUpsideDown();



  return 0;
}