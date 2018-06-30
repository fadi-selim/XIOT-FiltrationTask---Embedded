# Role of the design :

 - the user can initiate an interrupt once a push button is pressed to
   change the LED status (toggle) and show it in terminal using UART
  
 - Using ADC to convert analog data and display it using UART 
  
 - User need the temperature measure only every 3 seconds ***without
   holding the cpu***
  
 - It is important that user can add any piece of code without interfere
   or being interfered by the main role of the simulation

## Thought process

-   The project task doesn't require much processing power , or it would be exposed of hard environment conditions :
- These were persuasive reasons to choose neither ARM-uc neither PIC-uc , but Atmega32.
-   Easy task , without complication was another reason to choose Atmega32 (easy to implement and initiate).
-    My goal is to design a code to be reliable , that explains why including many .h and .c files

- ## My experience in this Field

### Embedded systems

-   I finished an embedded system diploma through which I worked on avr, arm & RTOS
    
-   I worked on many projects in avr and arm like :
    
    1.  ATM machinee(atmega32)
    2.  Smart Home using avr (atmega32)
    3.  Distance measuring device using arm (tm4c123gh6pm)
    4.  RC car with Arduino uno 
    

