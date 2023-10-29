#include "stc15f2k60s2.h"
sbit led = P3 ^ 5;
void IO_init(void) {
	P0M0 = 0X00;
	P0M1 = 0X00;
	
	P1M0 = 0X00;
	P1M1 = 0X00;
	
	P2M0 = 0X00;
	P2M1 = 0X00;
	
	P3M0 = 0X00;
	P3M1 = 0X00;
	
	P4M0 = 0X00;
	P4M1 = 0X00;
}

void delay(unsigned int m) {
	unsigned int a, b;
	for (a = 0; a < 5000; a++) {
		for (b = 0; b < m; b++);
	}
}
main() {
	IO_init();
	while (1) {
		led = 0;
		delay(200);
		led = 1;
		delay(200);
	}
}
	