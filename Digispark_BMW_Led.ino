#include <Adafruit_NeoPixel.h>

// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
#define PIN 1
#define NUM_PIX 4


// указываем цвет и яркость
int RED = 34;
int GREEN = 231;
int BLUE = 238;
int BRIGHTNESS = 200;


Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_PIX, PIN, NEO_GRB + NEO_KHZ800);

void setup() 
{
  strip.begin();
  strip.show(); // Инициализация , все светодиоды выключены
  strip.setBrightness(BRIGHTNESS);

  strip.setPixelColor(0, strip.Color(RED, GREEN, BLUE));
  strip.setPixelColor(1, strip.Color(RED, GREEN, BLUE));
  strip.setPixelColor(2, strip.Color(RED, GREEN, BLUE));
  strip.setPixelColor(3, strip.Color(RED, GREEN, BLUE));
  strip.show();

  
}
void loop() 
{

}
