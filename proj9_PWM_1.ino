#include <avr/io.h>
#include <util/delay.h>
#include <string.h>
#include <stdio.h>

void PWM_init()
{
  //Tryp pracy - Fast PWM (TOP=ICR1)
  TCCR1A |= (1<<WGM11);
  TCCR1B |= (1<<WGM12); 
  TCCR1B |= (1<<WGM13);
  
  //Prescaler 1
  TCCR1B |= (1<<CS10);

  // Ustawienie wartości ICR1 dla pełnego zakresu
  ICR1 = 0xFFFF;
}

void play(uint16_t frequency, uint16_t duration)
{
  //TOP
  ICR1 = 16000000/(1*frequency) - 1;
  
  //Compare output mode - włączenie sygnału PWM
  TCCR1A |= (1<<COM1A1);
  
  //wypełnienie 50%
  OCR1A = ICR1/2;
  
  _delay_ms(duration);

  //Compare output mode - wyłączenie sygnału PWM
  TCCR1A &= ~(1<<COM1A1);
}


int main()
{
  //Buzzer
  DDRB |= (1<<PB1);
  
  PWM_init();

  while(1)
  {
    play(2093,500);
    _delay_ms(500);

    play(2349,500);
    _delay_ms(500);

    play(2637,500);
    _delay_ms(500);

    play(2793,500);
    _delay_ms(500);

    play(3135,500);
    _delay_ms(500);

    play(3520,500);
    _delay_ms(500);

     play(3951,500);
    _delay_ms(500);

     play(4186,500);
    _delay_ms(10000);
    
  }

  return 0;
}
