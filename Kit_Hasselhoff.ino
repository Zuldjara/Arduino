#define ledRed1 2
#define ledRed2 3
#define ledRed3 4
#define ledRed4 5
#define ledRed5 6

#define LEDON HIGH
#define LEDOFF LOW

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledRed1, OUTPUT);
pinMode(ledRed2, OUTPUT);
pinMode(ledRed3, OUTPUT);
pinMode(ledRed4, OUTPUT);
pinMode(ledRed5, OUTPUT);

}

#define viive1 25
#define viive2 80
void loop() {
  // put your main code here, to run repeatedly:

Serial.println("Nana");
digitalWrite(ledRed1, HIGH);
delay(viive1);
Serial.println("Nana");
digitalWrite(ledRed2, HIGH);
delay(viive1);
Serial.println("BATMAN!!!!");
digitalWrite(ledRed1, LOW);
delay(viive2);
Serial.println("Nana");
digitalWrite(ledRed3, LEDON);
delay(viive1);
Serial.println("Nana");
digitalWrite(ledRed4, LEDON);
delay(viive1);
Serial.println("BATMAN!!!!");
digitalWrite(ledRed2, LOW);
delay(viive2);
Serial.println("BATMAN!!!!");
digitalWrite(ledRed3, LEDOFF);
delay(viive2);
Serial.println("BATMAN!!!!");
digitalWrite(ledRed4, LEDOFF);
delay(viive2);
Serial.println("Nana");
digitalWrite(ledRed4, LEDON);
delay(viive1);
Serial.println("Nana");
digitalWrite(ledRed3, LEDON);
delay(viive1);
digitalWrite(ledRed4, LEDOFF);
delay(viive2);
digitalWrite(ledRed2, HIGH);
delay(viive1);
Serial.println("Nana");
digitalWrite(ledRed1, HIGH);
delay(viive1);
Serial.println("BATMAN!!!!");
digitalWrite(ledRed3, LEDOFF);
delay(viive2);
Serial.println("BATMAN!!!!");
digitalWrite(ledRed2, LOW);
delay(viive2);
Serial.println("BATMAN!!!!");
digitalWrite(ledRed1, LOW);
delay(viive2);

}
