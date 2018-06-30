
# XIOT-Task Embedded Track


## Steps To Run This Project


  - Download or open Atmel Studio or (Eclipse).
  - Create new project and choose (Atmega32) device.
  - Add  all files where XIOT-task.c is the main file , and build the project
  - Using (Protues7.7) or any newer version open XIOT-DESIGN.DSN
 

### Important Assumptions:
*The Components (in protues) :*

 - Atmega32  
 - Led(red) 
 - Resistance(220ohm) 
 - PushButton (Active)  
 - Virtual Terminal from (virtual instrument modes)

**By clicking on atmega component (U1) :**
 

 - You can choose the settings (Leave in default mode 'crystal
   frequency=1MHz')  
   

 - You can also choose the filename.hex to run the simulation
[Example1 ](https://drive.google.com/file/d/1Cck5EMtMWUNqUpR20huRKQexx2ax7xy_/view?usp=sharing)
[Example2](https://drive.google.com/file/d/1sCaNriPOTS3KFY8Oo6kneSMJqfIzk7L3/view?usp=sharing)
**Possible Issues**:
*If the internal clock changed (any assumption except 1MHz) , the simulation can show unexpected output.*