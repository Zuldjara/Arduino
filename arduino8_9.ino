#define led1 11
#define led2 2
#define led4 4
#define led6 6
#define led7 7
#define led9 9
#define led10 10

#define ledOn LOW
#define ledOff HIGH

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

void number0(){
digitalWrite (led1, ledOn);
digitalWrite (led2, ledOn);
digitalWrite (led4, ledOn);
digitalWrite (led6, ledOn);
digitalWrite (led7, ledOn);
digitalWrite (led9, ledOn);
digitalWrite (led10, ledOff);

  
}



void number1(){
digitalWrite (led1, ledOff);
digitalWrite (led2, ledOff);
digitalWrite (led4, ledOn);
digitalWrite (led6, ledOn);
digitalWrite (led7, ledOff);
digitalWrite (led9, ledOff);
digitalWrite (led10, ledOff);

  
}

void number2(){
digitalWrite (led1, ledOn);
digitalWrite (led2, ledOn);
digitalWrite (led4, ledOff);
digitalWrite (led6, ledOn);
digitalWrite (led7, ledOn);
digitalWrite (led9, ledOff);
digitalWrite (led10, ledOn);

  
}

void number3(){
digitalWrite (led1, ledOff);
digitalWrite (led2, ledOn);
digitalWrite (led4, ledOn);
digitalWrite (led6, ledOn);
digitalWrite (led7, ledOn);
digitalWrite (led9, ledOff);
digitalWrite (led10, ledOn);

  
}

void number4(){
digitalWrite (led1, ledOff);
digitalWrite (led2, ledOff);
digitalWrite (led4, ledOn);
digitalWrite (led6, ledOn);
digitalWrite (led7, ledOff);
digitalWrite (led9, ledOn);
digitalWrite (led10, ledOn);

  
}

void number5(){
digitalWrite (led1, ledOff);
digitalWrite (led2, ledOn);
digitalWrite (led4, ledOn);
digitalWrite (led6, ledOff);
digitalWrite (led7, ledOn);
digitalWrite (led9, ledOn);
digitalWrite (led10, ledOn);

  
}

void number6(){
digitalWrite (led1, ledOn);
digitalWrite (led2, ledOn);
digitalWrite (led4, ledOn);
digitalWrite (led6, ledOff);
digitalWrite (led7, ledOn);
digitalWrite (led9, ledOn);
digitalWrite (led10, ledOn);

  
}

void number7(){
digitalWrite (led1, ledOff);
digitalWrite (led2, ledOff);
digitalWrite (led4, ledOn);
digitalWrite (led6, ledOn);
digitalWrite (led7, ledOn);
digitalWrite (led9, ledOff);
digitalWrite (led10, ledOff);

  
}

void number8(){
digitalWrite (led1, ledOn);
digitalWrite (led2, ledOn);
digitalWrite (led4, ledOn);
digitalWrite (led6, ledOn);
digitalWrite (led7, ledOn);
digitalWrite (led9, ledOn);
digitalWrite (led10, ledOn);

  
}

void number9(){
digitalWrite (led1, ledOff);
digitalWrite (led2, ledOn);
digitalWrite (led4, ledOn);
digitalWrite (led6, ledOn);
digitalWrite (led7, ledOn);
digitalWrite (led9, ledOn);
digitalWrite (led10, ledOn);

  
}


int ledNumber(){

  if (showNum() == 0){

    number0();

  }

  else if (showNum() == 1){

    number1();
  }

   else if (showNum() == 2){

    number2();
  }

   else if (showNum() == 3){

    number3();
  }

   else if (showNum() == 4){

    number4();
  }

   else if (showNum() == 5){

    number5();
  }

 else if (showNum() == 6){

    number6();
  }
   else if (showNum() == 7){

    number7();
  }
   else if (showNum() == 8){

    number8();
  }
 else if (showNum() == 9){

    number9();
  }
  
}

  




void setup()
{
  Serial.begin(9600);              //  setup serial

  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);
  pinMode (led4, OUTPUT);
  pinMode (led6, OUTPUT);
  pinMode (led7, OUTPUT);
  pinMode (led9, OUTPUT);
  pinMode (led10, OUTPUT);

  
}

void loop()
{
  Serial.println(showNum());             // debug value

ledNumber();
 
}




