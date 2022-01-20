@echo off
echo 8051 8052 burn hex file
echo by iot noob

set /p port=Enter com port of programmer like COM1 COM2 COM3 COM4.. : 
"C:\Program Files (x86)\Arduino\hardware\tools\avr\bin\avrdude.exe" -C C:\AVR8051.conf -c  stk500v1 -P%port%  -p 89s51 -b  19200 -e  -F
set /p path=Enter Location of hex file: 
"C:\Program Files (x86)\Arduino\hardware\tools\avr\bin\avrdude.exe" -C C:\AVR8051.conf -c stk500v1 -PCOM4  -p89s51 -b 19200 -U flash:w:%path%:a -F

 

PAUSE