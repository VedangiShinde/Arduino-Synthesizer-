#include <CapacitiveSensor.h>
#include "KeyboardNotes.h"
#define buzzer 11
int volume=1000;
int x=0;
KeyboardNotes keyboard = KeyboardNotes();

// Set the Send Pin & Receive Pin.
CapacitiveSensor   cs_12_3 = CapacitiveSensor(12,3);       
CapacitiveSensor   cs_12_4 = CapacitiveSensor(12,4);        
CapacitiveSensor   cs_12_5 = CapacitiveSensor(12,5);    
CapacitiveSensor   cs_12_6 = CapacitiveSensor(12,6);    
CapacitiveSensor   cs_12_7 = CapacitiveSensor(12,7);     
CapacitiveSensor   cs_12_8 = CapacitiveSensor(12,8);        
CapacitiveSensor   cs_12_9 = CapacitiveSensor(12,9); 
CapacitiveSensor   cs_12_2 = CapacitiveSensor(12,2);    

void setup()                   
{
  // turn off autocalibrate on channel 1 - just as an example
  cs_12_3.set_CS_AutocaL_Millis(0xFFFFFFFF); 
  cs_12_4.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_12_5.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_12_6.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_12_7.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_12_8.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_12_9.set_CS_AutocaL_Millis(0xFFFFFFFF);    
  cs_12_2.set_CS_AutocaL_Millis(0xFFFFFFFF);
}

void loop()                   
{
  // Set the sensitivity of the sensors.
  long touch1 =  cs_12_3.capacitiveSensor(volume);
  long touch2 =  cs_12_4.capacitiveSensor(volume);
  long touch3 =  cs_12_5.capacitiveSensor(volume);
  long touch4 =  cs_12_6.capacitiveSensor(volume);
  long touch5 =  cs_12_7.capacitiveSensor(volume);
  long touch6 =  cs_12_8.capacitiveSensor(volume);
  long touch7 =  cs_12_9.capacitiveSensor(volume);
  long touch8 =  cs_12_2.capacitiveSensor(volume);
 
  // When we touched the sensor, the buzzer will produce a tone.
  if (touch1 > volume){
   digitalRead(keyboard.key[x]);
   tone(buzzer, keyboard.note[x]);// play note for undetermined amount of timee
    }
   
  if (touch2 > volume){
   digitalRead(keyboard.key[x+2]);
   tone(buzzer, keyboard.note[x+2]);// play note for undetermined amount of time
    }
   
  if (touch3 >volume){
     digitalRead(keyboard.key[x+3]);
   tone(buzzer, keyboard.note[x+3]);// play note for undetermined amount of time
    }
  
  if (touch4 > volume) {
digitalRead(keyboard.key[x+4]);
   tone(buzzer, keyboard.note[x+4]);// play note for undetermined amount of time
    }
  
  if (touch5 > volume){
   digitalRead(keyboard.key[x+5]);
   tone(buzzer, keyboard.note[x+5]);// play note for undetermined amount of time
    }
  
  if (touch6 > volume){
   digitalRead(keyboard.key[x+6]);
   tone(buzzer, keyboard.note[x+6sss]);// play note for undetermined amount of time
    
  }
  if (touch7 > volume){
   tone(buzzer, 1550);// play note for undetermined amount of time
  }
  if (touch8 > volume){
   tone(buzzer, keyboard.note[x+8]);// play note for undetermined amount of time
  }

  // When we didn't touch it, no tone is produced.
  if (touch1<=volume &  touch2<=volume  &  touch3<=volume & touch4<=volume &  touch5<=volume  &  touch6<=volume &  touch7<=volume&  touch8<=volume)
    noTone(buzzer);
  delay(10); 
 }
