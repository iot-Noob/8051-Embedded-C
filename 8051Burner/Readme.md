# 8051 Embedded C  Code burner using Arduino
## _My own projects and Library for 8051 microc controller_

[![N|Solid](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQaHKkGq7YMEFBr33Y9NAtJLYDfn75DNsJl9wTlUEHJxvVnJzpiYw-NWo4NwGjO_sxmtWA&usqp=CAU )](https://nodesource.com/products/nsolid)

 
Dillinger is a cloud-enabled, mobile-ready, offline-storage compatible,
AngularJS-powered HTML5 Markdown editor.

- 8 Bit Microcontroller
- 40 Pins with IO pins from P0-P4
- 4kb rom
- 128 Bytes of ram
- 2 16 bit Timmer
- On board interrupts
 
## About 8051
Int his project id you guys are using arduino to program 8051 Microcontroller then this is a place for you to do so  i made a bat file so its easy for me to program my microcontroller and burn code insted of adding commands manually 

 

##  Pinout For 8051  

[![N|Solid](https://www.tutorialspoint.com/microprocessor/images/8051_pin_diagram.jpg)](https://nodesource.com/products/nsolid)
> Pin 1 to 8 are 1st 8 bit pins for this microcontroller that is 8 bit for port 1 range from 1.0-1.7
> Pin 10 to 17 are 1st 8 bit pins for this microcontroller that is 8 bit for port 3 ranege etween 3.0-3.7
> Pin 39 to 32 are 8 bit for port 0 
> pin 28-21 are 8 bit pins for port 2 lie bwtween 2.0-2.7 

### Datasheet for 8051
Here is require datasheet for this microcontroler
[Datasheet for 8051 microcontroller](https://pdf1.alldatasheet.com/datasheet-pdf/view/77367/ATMEL/AT89S51.html)

### Program it through Arduino 
[![N|Solid](https://www.grspy.com/wp-content/uploads/2019/03/8051-arduino_programming-updated.jpg)](https://nodesource.com/products/nsolid)

> Pin 10 of Arduino goes to Pin 9 RST pin of 8051
> Pin 11 of Arduino goes to Pin 6  pin of 8051
> Pin 12 of Arduino goes to Pin 7  pin of 8051
> Pin 13 of Arduino goes to Pin 8  pin of 8051

8051 Burner edit it and add location of your avrdude inside arduino folder 

"C:\Program Files (x86)\Arduino\hardware\tools\avr\bin\avrdude.exe" -C C:\AVR8051.conf -c  stk500v1 -P%port%  -p 89s51 -b  19200 -e  -F

> C:\Program Files (x86)\Arduino\hardware\tools\avr\bin\avrdude.exe"
 
 Relpace it with your location where you install arduino othervise it work
 "C:\Program Files (x86)\Arduino\hardware\tools\avr\bin\avrdude.exe" -C C:\AVR8051.conf -c stk500v1 -PCOM4  -p89s51 -b 19200 -U flash:w:%path%:a -F
 
 "C:\Program Files (x86)\Arduino\hardware\tools\avr\bin\avrdude.exe" -C C:\AVR8051.conf -c stk500v1 -PCOM4  -p89s51 -b 19200 -U flash:w:%path%:a -F
 
 change the path here as well.
 
 after this copy this 8051burner.bat to  C:\Windows
 