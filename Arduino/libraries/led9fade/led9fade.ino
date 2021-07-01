int blled = 11;           // red led
int grled = 10;          // green led
int rdled = 9;          // blue led 
int brightness = 10;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup()  { 
  // declare pin 9 to be an output:
  pinMode(rdled, OUTPUT);
  pinMode(grled, OUTPUT);
  pinMode(blled, OUTPUT);
} 

// the loop routine runs over and over again forever:
void loop()  { 
  // set the brightness of pin 9:
  brightness = random(255);
  analogWrite(rdled, brightness);
  brightness = random(255);     
  analogWrite(grled, brightness);
  brightness = random(255);
  analogWrite(blled, 40);


  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade: 
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount ; 
  }     
  // wait for 30 milliseconds to see the dimming effect    
  delay(1000);                            
}
