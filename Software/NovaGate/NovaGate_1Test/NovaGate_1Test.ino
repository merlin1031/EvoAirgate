#include <FastLED.h>

#define NUM_LEDS 61
#define DATA_PIN 6

CRGB leds[NUM_LEDS];

void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
}

void loop() {
  // Turn the first led red for 1 second
  leds[0] = CRGB::Red; 
  FastLED.show();
  delay(1000);
      
  // Set the first led back to black for 1 second
  leds[0] = CRGB::Black;
  FastLED.show();
  delay(1000);
}
