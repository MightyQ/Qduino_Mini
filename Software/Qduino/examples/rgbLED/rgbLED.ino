/* Qduino RGB LED Example
  
   This example controls the user RGB LED near the top
   of the board.
   
   Possible colors for setRGB(color) function:
   
   red
   orange
   yellow
   green
   cyan
   blue
   purple
   pink
   white
  
   created on 30 Jun 15
   made by Quin Etnyre
*/

#include "Qduino.h"
#include "Wire.h"

qduino q;  // initialize the library

void setup() {
  
  q.setup();

}

void loop() {
  
  q.setRGB(100, 150, 200);  // r, g, b values
  
  delay(500);
  
  q.setRGB(qduino::RED);
  
  delay(500);
  
  q.setRGB(qduino::ORANGE);
  
  delay(500);
  
  q.setRGB(qduino::YELLOW);

  delay(500);
  
  q.setRGB(qduino::GREEN);
  
  delay(500);
  
  q.setRGB(qduino::CYAN);
  
  delay(500);
  
  q.setRGB(qduino::BLUE);
  
  delay(500);
  
  q.setRGB(qduino::PURPLE);
  
  delay(500);
  
  q.setRGB(qduino::PINK);
  
  delay(500);
  
  q.setRGB(qduino::WHITE);
  
  delay(500);
  
  q.rainbow(3);  // number between 1&5
  
  q.ledOff();
  
  delay(500);
  
}
