int analogPin = 0;     // potentiometer wiper (middle terminal) connected to analog pin 3
                       // outside leads to ground and +5V
int val = 0;           // variable to store the value read

int potval;

int showNum(){

potval = analogRead(analogPin);

if (potval >= 0 && potval <= 101){

  return 0;
  
}

if (potval >= 102 && potval <= 203){

  return 1;
  
}

if (potval >= 204 && potval <= 305){

  return 2;
  
}

if (potval >= 306 && potval <= 407){

  return 3;
  
}

if (potval >= 408 && potval <= 509){

  return 4;
  
}

if (potval >= 510 && potval <= 611){

  return 5;
  
}

if (potval >= 612 && potval <= 713){

  return 6;
  
}

if (potval >= 714 && potval <= 815){

  return 7;
  
}

if (potval >= 816 && potval <= 917){

  return 8;
  
}

if (potval >= 918 && potval <= 1023){

  return 9;
  
}
  

  
}

  
  

void setup()
{
  Serial.begin(9600);              //  setup serial
  
}

void loop()
{
  Serial.println(showNum());             // debug value
  
}




