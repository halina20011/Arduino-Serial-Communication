/*#################################################################################
 * This project was produced by Halina
 * 
 *  github: https://github.com/halina20011/Arduino-Serial-Communication
 *  YouTube: https://www.youtube.com/watch?v=QE2UWFv8szw&t
 *  
###################################################################################*/
int ledPin = 13;
int incomingByte = 2;
String command = "";

void setup(){
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}
void loop(){
  if (Serial.available() > 0) {
    incomingByte = Serial.read(); //Read Serial port

    Serial.print("Received: ");
    Serial.println(incomingByte);
    if (incomingByte == '1'){ //If the serial port sent 1, the LED will turn ON.
      Serial.println("Led: ON");
      digitalWrite(ledPin, HIGH); //Turn ON Led
    }
    if (incomingByte == '0'){ //If the serial port sent 0, the LED will turn OFF.
      Serial.println("Led: OFF");
      digitalWrite(ledPin, LOW); //Turn OFF Led
    }
  }
}
