LCD Display Library (8-Bit Mode)

This is a simple LCD (Liquid Crystal Display) library designed for LPC21XX series microcontrollers using 8-bit communication mode.

Overview

This library allows you to interface a standard character LCD with an LPC21XX microcontroller. The LCD is connected in 8-bit mode for full data transfer.

LCD to MCU Pin Configuration

Ensure the following connections between the LCD and the LPC21XX microcontroller:

LCD Pin       → MCU Pin
------------------------
RS            → P0.0
EN            → P0.1
RW            → GND     (Write-only mode)
D0            → P0.2
D1            → P0.3
D2            → P0.4
D3            → P0.5
D4            → P0.6
D5            → P0.7
D6            → P0.8
D7            → P0.9


📝 Note: The RW pin is grounded as the library is intended for write-only operations.
