#include <Keyboard.h>
int button = 6; 

void setup() {
 
  pinMode(button, INPUT);
  Keyboard.begin();
}

void loop() {
  //if the button is pressed
  if(digitalRead(button)==HIGH){
    //Send the message
    Keyboard.press(KEY_ESC);
    Keyboard.release(KEY_ESC);
    Serial.println("esc pressed");
    delay(1000);
//    Keyboard.release(KEY_ESC);
  }
}
