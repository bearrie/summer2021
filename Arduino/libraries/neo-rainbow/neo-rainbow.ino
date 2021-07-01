// RGBW (Red Green Blue White Neo-Pixel starter code
// 16 LEDS with no loop inside of void loop()
// CW Coleman 180417

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 6

#define NUM_LEDS 16

#define BRIGHTNESS 50

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRBW + NEO_KHZ800);


void setup() {
  Serial.begin(115200);
  strip.setBrightness(BRIGHTNESS);
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

// Initialize some variables for the void loop()
int led, red, green, blue, white;
int wait = 100;

void loop() {
// turn on led 0 - - -
  led = 0; 
  red = 250; 
  green = 20; 
  blue = 10; 
  white = 10; 
// turn on led 0 (zero)  
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show();
// turn on the next led
  led = led +1 ; red = 220; green = 50; blue = 20; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show();
// turn on the next led
  led = led +1 ; red = 200; green = 80; blue = 20; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show();
// turn on the next led
  led = led +1 ; red = 190; green = 90; blue = 20; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show();
// turn on the next led
  led = led +1 ; red = 180; green = 100; blue = 20; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show();
// turn on the next led
  led = led +1 ; red = 160; green = 120; blue = 20; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show();
// turn on the next led
  led = led +1 ; red = 140; green = 140; blue = 20; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show(); 
// turn on the next led
  led = led +1 ; red = 130; green = 150; blue = 20; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show(); 
// turn on the next led
  led = led +1 ; red = 120; green = 160; blue = 20; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show(); 
// turn on the next led
  led = led +1 ; red = 110; green = 170; blue = 20; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show(); 
// turn on the next led
  led = led +1 ; red = 100; green = 190; blue = 60; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show(); 
// turn on the next led
  led = led +1 ; red = 90; green = 200; blue = 80; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show(); 
// turn on the next led
  led = led +1 ; red = 80; green = 200; blue = 120; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show(); 
// turn on the next led
  led = led +1 ; red = 60; green = 200; blue = 140; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show(); 
// turn on the next led
  led = led +1 ; red = 80; green = 160; blue = 160; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show(); 
// turn on the next led
  led = led +1 ; red = 100; green = 120; blue = 200; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show(); 
// turn on the next led
  led = led +1 ; red = 120; green = 90; blue = 170; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show(); 
  
strip.setBrightness(0);
strip.setBrightness(BRIGHTNESS);
delay(1);
}
