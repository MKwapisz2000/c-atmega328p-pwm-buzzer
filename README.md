# c-atmega328p-pwm-buzzer

**Project Description - English**

This project demonstrates generating sounds on a buzzer using PWM signal in ATmega328P. The PWM signal is generated using Fast PWM mode on Timer1, allowing the creation of different sound frequencies. The implementation enables playing a series of tones at different pitches.

Features:

- Configuring Timer1 in Fast PWM mode

- Generating sounds at different frequencies

- Controlling a buzzer via PWM

- Playing simple tones

- Using ATmega328P microcontroller in pure C

Hardware Requirements:

- ATmega328P microcontroller (e.g., Arduino Nano or standalone AVR)

- Buzzer connected to PB1 (OC1A)

- Connecting wires

- 5V power supply

Usage Instructions:

- Compile the code in an AVR C-compatible environment (e.g., Atmel Studio, PlatformIO, AVR-GCC).

- Connect the buzzer according to the schematic (PB1 – OC1A).

- Upload the program to the microcontroller using an ISP programmer.

- The buzzer will play a series of tones at different frequencies.

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

**Opis projektu - Polski**

Ten projekt demonstruje generowanie dźwięków na buzzerze przy użyciu sygnału PWM w ATmega328P. Sygnał PWM jest generowany w trybie Fast PWM na Timer1, co pozwala na uzyskanie różnych częstotliwości dźwięków. Implementacja pozwala na odgrywanie serii tonów o różnych wysokościach.

Funkcjonalność:

- Konfiguracja Timer1 w trybie Fast PWM 

- Generowanie dźwięków o różnych częstotliwościach

- Sterowanie buzzerem przez PWM

- Odgrywanie prostych dźwięków

- Obsługa mikrokontrolera ATmega328P w czystym C

Wymagania sprzętowe:

- Mikrokontroler ATmega328P (np. Arduino Nano lub standalone AVR)

- Buzzer podłączony do PB1 (OC1A)

- Przewody połączeniowe

- Zasilanie 5V

Instrukcja użytkowania:

- Skompiluj kod w środowisku obsługującym AVR C (np. Atmel Studio, PlatformIO, AVR-GCC).

- Podłącz buzzer zgodnie ze schematem (pin PB1 – OC1A).

- Wgraj program do mikrokontrolera za pomocą programatora ISP.

- Buzzer będzie odtwarzał serię dźwięków o różnych częstotliwościach.
