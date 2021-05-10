int ledPin = 13;
int incomingByte = 0;
String command = "";

void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  if (Serial.available() > 0) {
    incomingByte = Serial.read();

    // say what you got:
    Serial.print("I received: ");
    Serial.println(incomingByte);
    if (incomingByte == '1'){
      Serial.println("Get 1");
      digitalWrite(ledPin, HIGH);
    }
    if (incomingByte == '2'){
      Serial.println("Get 2");
      digitalWrite(ledPin, LOW);
    }
  }
}
