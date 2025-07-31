#include <REG51.h>

sbit GREEN  = P1^0;  
sbit YELLOW = P1^1;
sbit RED    = P1^2;

unsigned char state = 0;
unsigned int counter = 0;  // For software timing

void Timer0_Init()
{
    TMOD = 0x01;     // Timer0, Mode 1 (16-bit)
    TH0 = 0x3c;      // ~50 ms delay at 12 MHz
    TL0 = 0xb0;
    ET0 = 1;         // Enable Timer0 interrupt
    EA  = 1;         // Enable global interrupts
    TR0 = 1;         // Start Timer0
}

void timer_ISR(void) interrupt 1
{
    TF0 = 0;         // Clear interrupt flag
    TH0 = 0x3C;      // Reload Timer
    TL0 = 0xb0;

    counter++;
        if (state == 0 && counter >= 100) {
            RED = 0;
            YELLOW = 0;
            GREEN = 1;
            state = 1;
					counter = 0;
        }
        else if (state == 1 && counter >= 100) {
            RED = 0;
            YELLOW = 1;
            GREEN = 0;
            state = 2;
					counter = 0;
        }
        else if (state == 2 && counter >= 60) {
            RED = 1;
            YELLOW = 0;
            GREEN = 0;
            state = 0;
					counter = 0;
        
    }
}

void main()
{
    P1 = 0x00;       // Clear Port1
    Timer0_Init();

    while(1);        // Infinite loop, logic handled in ISR
}


		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
