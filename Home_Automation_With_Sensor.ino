

#include <NewPing.h>

#define TRIGGER_PIN  6  
#define ECHO_PIN     7  
#define MAX_DISTANCE 200
 
#define TRIGGER_PIN1  8  
#define ECHO_PIN1     9  
#define MAX_DISTANCE1 200 
int a = 0;
int b = 0;
int s = 0;
int i = 0;
int counter = 0;

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
NewPing sonar1(TRIGGER_PIN1, ECHO_PIN1, MAX_DISTANCE1);
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}
void check(){
  delay(100); 
  a = sonar.ping_cm();
  b = sonar1.ping_cm();
  if(0< a && 8 >= a){
    s = 1;
    }
  else{
    s = 0;
    }
  if(0< b && 8 >= b){
    i = 1;
    }
  else{
    i = 0;
    }
  }
void debug(){
  Serial.print("People = ");
  Serial.print(counter);
  Serial.println(" ");
}
void loop() {
while(1){  
  check();
  debug();
if(i == 1 && s == 0){
  counter--;
  delay(1000);
  }
else if(i == 0 && s == 1){
  counter++;
  delay(1000);
  }
if(counter <= 0){
  digitalWrite(13, 0);
}
else if(counter < 0){
  counter = 0;
}
 else{
  digitalWrite(13, 1);
  }
}

}
