// DREAMCAST TACHO SIGNAL WIRE FOR ARDUINO NANO, USE VA0 FAN ON VA1 CONTROLLER PORT
// USED RTM TIMER CALCULATOR, CALCULATED FOR MAX RPM SIGNAL ON 9000RPM DC FAN.

TCCR1B = 0x18;
TCCR1A = 0xA2;
ICR1 = 13320-1;
OCR1A = (int) (ICR1 * 0.25);
OCR1B = (int) (ICR1 * 0.50);
TCNT1=0x0;
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
TCCR1B |= 1;
}

void loop() {
 loop();
}

/*
 D10 to Tach wire, 10k resistor from tach wire to +5v on controller PCB
 */
