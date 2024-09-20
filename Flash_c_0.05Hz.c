


#include <xc.h>

int main(void) {
    TRISBbits.TRISB6 = 0;
    while (1)                   // infinite loop that restarts when code in block is executed 
    {
        LATBbits.LATB6 =1;      // pin 6 on Port B is set high
        _delay (25);           //delay time for 0.025 seconds
        LATBbits.LATB6 = 0;    // pin 6 on Port B is set low
        _delay (25);          // delay time for 0.025 seconds
    }
    return 0;
}
