#include<msp430.h>
void delay()
 {
  unsigned int i = 0;
  while(++i < 65000);
 }

 main()
   {
     P1DIR=0x7f;
     
    while(1)
     {
    
      P1OUT = 0x7f;
      delay();

    
      P1OUT = BIT1 | BIT2;
      delay();

    
      P1OUT = 0x5b;
      delay();


  
      P1OUT = 0x4f;
      delay();
 
  
      P1OUT = 0x66;
      delay();

   
      P1OUT = 0x6d;
      delay();

   
      P1OUT = 0x7d;
      delay();


      P1OUT = 0x07;
      delay();
   
      P1OUT = 0x7f;
      delay();
   
      P1OUT = 0x67;
      delay();
     }
   }
