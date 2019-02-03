#include <DAVE.h>                 //Declarations from DAVE Code Generation (includes SFR declaration)



int main(void)
{
  DAVE_Init();           /* Initialization of DAVE APPs  */

  DAC_LUT_Init(&DAC_LUT_0);
  DAC_LUT_Start(&DAC_LUT_0);

  while(1U);
}
