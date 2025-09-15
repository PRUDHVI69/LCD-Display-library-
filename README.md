LCD Display Library (8-Bit Mode)

This is a simple LCD (Liquid Crystal Display) library designed for LPC21XX series microcontrollers using 8-bit communication mode.

Overview

This library allows you to interface a standard character LCD with an LPC21XX microcontroller. The LCD is connected in 8-bit mode for full data transfer.

LCD to MCU Pin Configuration

Ensure the following connections between the LCD and the LPC21XX microcontroller:

LCD Pin	MCU Pin (LPC21XX)	Description
RS	P0.0	Register Select
EN	P0.1	Enable
RW	GND	Write mode only
D0	P0.2	Data Bit 0
D1	P0.3	Data Bit 1
D2	P0.4	Data Bit 2
D3	P0.5	Data Bit 3
D4	P0.6	Data Bit 4
D5	P0.7	Data Bit 5
D6	P0.8	Data Bit 6
D7	P0.9	Data Bit 7

📝 Note: The RW pin is grounded as the library is intended for write-only operations.
