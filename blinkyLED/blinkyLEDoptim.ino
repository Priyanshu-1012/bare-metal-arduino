#include <avr/io.h>
#include <util/delay.h>

int main() {
  DDRB = 0xff;

  while (1) {
    PORTB ^= 0xff;
    _delay_ms(1000);
  }

  return 0;
}
