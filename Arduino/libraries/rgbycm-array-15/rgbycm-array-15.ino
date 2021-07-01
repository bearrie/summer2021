int blled = 11;   // red led
int gnled = 10;  //green led
int rdled = 9;  // blue
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup()  { 
  // declare pin 9 to be an output:
  pinMode(rdled, OUTPUT);
  pinMode(gnled, OUTPUT);
  pinMode(blled, OUTPUT);
    Serial.begin(9600);

  // if analog input pin 0 is unconnected, random analog
  // noise will cause the call to randomSeed() to generate
  // different seed numbers each time the sketch runs.
  // randomSeed() will then shuffle the random function.
  randomSeed(analogRead(0));
} 

void rgbled(int red, int green, int blue){
   analogWrite(rdled, red);   
  analogWrite(gnled, green);   
  analogWrite(blled, blue);   
 
}

int r[15] = {0,0,255,30,40,235,235,255,80,90,100,110,100,200,255};
int g[15] = {0,255,0,155,235,120,0,55,10,155,20,255,100,200,255};
int b[15] = {255,0,0,255,100,50,225,0,215,0,205,0,100,200,255};
int i;
// the loop routine runs over and over again forever:
void loop()  { 
  for (i = 0; i < 15;i++){
    rgbled(r[i],g[i],b[i]);
    delay(1500);
  }                  
}
