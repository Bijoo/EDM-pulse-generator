void setup()
{
DDRB |= _BV(PB1) | _BV(PB2);        /* set pins as outputs */
TCCR1A = _BV(COM1A1) | _BV(COM1B1)  /* non-inverting PWM */
| _BV(WGM11);                   /* mode 14: fast PWM, TOP=ICR1 */
TCCR1B = _BV(WGM13) | _BV(WGM12)
| _BV(CS10);                    /* no prescaling */
ICR1 = 3200; //frequency 5KHz
OCR1A = 500; //pulse wide 15% on pin9
OCR1B = 250; //pulse wide 7,5% on pin10
}

void loop()
{
}
